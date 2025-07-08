#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "analisador_sintatico.tab.h"

extern YYSTYPE yylval; 
FILE *yyout_tokens; 
FILE *output_code_file;
extern int yylineno; 
extern FILE *yyin; 
extern int yylex(); 
extern int yyparse(); 

int main(int argc, char **argv) {
    
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <arquivo_fonte_sua_linguagem>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Erro ao abrir arquivo de entrada");
        return 1;
    }

    yyin = input_file; 

    yyout_tokens = fopen("tokens_reconhecidos.txt", "w");
    if (!yyout_tokens) {
        perror("Erro ao criar arquivo de saída de tokens");
        fclose(input_file);
        return 1;
    }

    output_code_file = fopen("programa_traduzido.c", "w");
    if (!output_code_file) {
        perror("Erro ao criar arquivo de saída de código traduzido");
        fclose(input_file);
        fclose(yyout_tokens);
        return 1;
    }
    
    printf("Iniciando análise do programa '%s'...\n", argv[1]);

    int parse_result = yyparse();

    fclose(input_file);
    fclose(yyout_tokens);
    fclose(output_code_file); 

    if (parse_result == 0) {
        printf("Análise concluída: Programa válido.\n");
        printf("Tokens reconhecidos salvos em 'tokens_reconhecidos.txt'\n");
        
        return 0; 
    } else {
        fprintf(stderr, "Análise concluída: Erros encontrados no programa.\n");
        return 1; 
    }
}

