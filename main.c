#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definir YYSTYPE no main.c ou em um cabeçalho separado
// É preferível mover esta definição para um arquivo .h separado (ex: types.h)
// e incluí-lo em main.c e no cabeçalho de parser.y (parser.tab.h).
// Mas para resolver o erro rapidamente, pode-se copiá-la aqui:


// Inclui o cabeçalho gerado pelo Bison, que contém as definições de tokens
// e a declaração da função yyparse().
#include "analisador_sintatico.tab.h"

// Variáveis globais acessíveis pelo lexer e parser
// Variável yylval (definida em parser.y) para comunicação entre lexer e parser
// É necessário declará-la como 'extern' aqui se ela for definida em parser.y
// E se a definição da union YYSTYPE estiver em parser.y, precisaria de um #include para ela.
// No nosso caso, estamos definindo YYSTYPE aqui mesmo no main.c, então não precisa de 'extern' para yylval aqui.
// Mas o Bison vai gerar uma declaração 'extern YYSTYPE yylval;' em analisador_sintatico.tab.h se você usar %union.
// A forma mais segura é:
extern YYSTYPE yylval; // Se o Bison a declara extern no .h ou se você a define em parser.y


// Variável para o arquivo de saída de tokens (extern para ser usada no lexer.l)
extern FILE *yyout_tokens; // Já era extern, OK

// Variável para o arquivo de saída de código traduzido (extern para ser usada no parser.y)
extern FILE *output_code_file; // Já era extern, OK

// Variável para o número da linha (se usar %option yylineno no lexer.l)
extern int yylineno; // Já era extern, OK

// NOVO: Variável global yyin do Flex
extern FILE *yyin; // <--- ADICIONE ESTA LINHA


// Declaração da função yylex() do analisador léxico (gerada pelo Flex)
extern int yylex(); // Já era extern, OK

// Declaração da função yyparse() do analisador sintático (gerada pelo Bison)
extern int yyparse(); // Já era extern, OK

int main(int argc, char **argv) {
    // 1. Abrir o arquivo de entrada (código-fonte da sua linguagem)
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <arquivo_fonte_sua_linguagem>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Erro ao abrir arquivo de entrada");
        return 1;
    }

    // Redireciona a entrada padrão do Flex para o arquivo de entrada
    yyin = input_file; // AGORA yyin está declarado como extern

    // 2. Abrir o arquivo de saída para o reconhecimento de tokens
    yyout_tokens = fopen("tokens_reconhecidos.txt", "w");
    if (!yyout_tokens) {
        perror("Erro ao criar arquivo de saída de tokens");
        fclose(input_file);
        return 1;
    }

    // 3. (Opcional) Abrir o arquivo de saída para o código traduzido
    output_code_file = fopen("programa_traduzido.c", "w");
    if (!output_code_file) {
        perror("Erro ao criar arquivo de saída de código traduzido");
        fclose(input_file);
        fclose(yyout_tokens);
        return 1;
    }
    // Exemplo: Iniciar o código C traduzido com a função main
    // fprintf(output_code_file, "#include <stdio.h>\n\n");
    // fprintf(output_code_file, "int main() {\n");


    printf("Iniciando análise do programa '%s'...\n", argv[1]);

    // 4. Chamar o analisador sintático (que por sua vez chamará o léxico)
    int parse_result = yyparse();

    // 5. Fechar todos os arquivos
    fclose(input_file);
    fclose(yyout_tokens);
    fclose(output_code_file); // Fechar o arquivo de código traduzido

    if (parse_result == 0) {
        printf("Análise concluída: Programa válido.\n");
        printf("Tokens reconhecidos salvos em 'tokens_reconhecidos.txt'\n");
        // printf("Código traduzido salvo em 'programa_traduzido.c'\n");
        return 0; // Sucesso
    } else {
        fprintf(stderr, "Análise concluída: Erros encontrados no programa.\n");
        return 1; // Erro
    }
}

// A função yyerror é implementada em parser.y e chamada pelo Bison em caso de erro sintático.
// Se você a implementar em main.c, remova a implementação do parser.y
// A implementação está em analisador_sintatico.y, então NADA A FAZER AQUI