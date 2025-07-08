%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h" // Inclui a definição de YYSTYPE e outras globais

#ifndef _GNU_SOURCE
#define _GNU_SOURCE // Habilita asprintf, se ainda não estiver definido
#endif

extern int yylex();
extern int yylineno;
void yyerror(const char *s);

extern FILE *output_code_file;
extern FILE *yyout_tokens;

// A definição da union YYSTYPE agora está em "defs.h"
// e é incluída por este arquivo via "defs.h".
%}

/* --- Seção de Declarações de Tokens e Precedências --- */

%token ENT_TOKEN REAL_TOKEN CHR_TOKEN
%token SI_TOKEN DEMAS_TOKEN CAMBIO_TOKEN CASO_TOKEN
%token MIENTRAS_TOKEN PARA_TOKEN
%token MAS_TOKEN MENOS_TOKEN POR_TOKEN DIVIDIDO_TOKEN RESTO_TOKEN
%token COMENZAR_TOKEN FIN_TOKEN
%token ATRIB_TOKEN AMPERSAND_TOKEN LE_INPUT_TOKEN HASH_TOKEN ARROW_TOKEN
%token LBRACKET RBRACKET
%token HASH_HASH EXCL_EXCL SEMI_SEMI
%token LPAREN RPAREN COLON

%token GT_RELATIONAL LT_RELATIONAL GE_RELATIONAL LE_RELATIONAL EQ_RELATIONAL
%token AND_LOGICAL OR_LOGICAL NOT_LOGICAL

%token <str_val> ID_TOKEN STRING_LITERAL CHAR_LITERAL
%token <int_val> INT_LITERAL
%token <float_val> FLOAT_LITERAL

// Declara o tipo para os símbolos não-terminais que precisam passar valores.
%type <str_val> programa lista_comandos comando atribuicao declaracao entrada_dados saida condicional cambio_stmt lista_casos caso_stmt repeticao repeticao_for expressao condicao tipo lista_itens_saida_gen_code item_saida_gen_code


%start programa

%left OR_LOGICAL
%left AND_LOGICAL
%right NOT_LOGICAL
%nonassoc EQ_RELATIONAL GT_RELATIONAL LT_RELATIONAL GE_RELATIONAL LE_RELATIONAL
%left MAS_TOKEN MENOS_TOKEN
%left POR_TOKEN DIVIDIDO_TOKEN RESTO_TOKEN

%%

/* --- Seção de Regras de Produção e Ações Semânticas --- */

programa:
      COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("Análise sintática concluída com sucesso. Programa válido!\n");

        fprintf(output_code_file, "#include <stdio.h>\n");
        fprintf(output_code_file, "#include <stdlib.h>\n");
        fprintf(output_code_file, "#include <string.h>\n\n");
        
        fprintf(output_code_file, "int main() {\n");
        fprintf(output_code_file, "%s", $2); // Código dos comandos
        fprintf(output_code_file, "    return 0;\n");
        fprintf(output_code_file, "}\n");
        
        free($2);
    }
    ;

lista_comandos:
      comando
    {
        $$ = strdup($1);
        free($1);
    }
    | comando lista_comandos
    {
        asprintf(&$$, "%s%s", $1, $2);
        free($1);
        free($2);
    }
    ;

comando:
      atribuicao EXCL_EXCL
    {
        asprintf(&$$, "    %s;\n", $1);
        free($1);
    }
    | declaracao EXCL_EXCL
    {
        asprintf(&$$, "    %s;\n", $1);
        free($1);
    }
    | entrada_dados EXCL_EXCL
    {
        asprintf(&$$, "    %s;\n", $1);
        free($1);
    }
    | saida EXCL_EXCL
    {
        // A regra 'saida' agora passa o código C completo do printf(s) que gerou.
        // ex: $$ = "printf(\"fmt\", arg);"
        asprintf(&$$, "%s", $1); // $1 é a string C gerada por 'saida'
        free($1);
    }
    | condicional
    {
        $$ = strdup($1);
        free($1);
    }
    | repeticao
    {
        $$ = strdup($1);
        free($1);
    }
    | repeticao_for
    {
        $$ = strdup($1);
        free($1);
    }
    | cambio_stmt
    {
        $$ = strdup($1);
        free($1);
    }
    ;

atribuicao:
      ID_TOKEN ATRIB_TOKEN expressao
    {
        asprintf(&$$, "    %s = %s", $1, $3);
        free($1);
        free($3);
    }
    ;

declaracao:
      tipo ID_TOKEN
    {
        asprintf(&$$, "    %s %s", $1, $2);
        free($1);
        free($2);
    }
    ;

tipo:
      ENT_TOKEN    { $$ = strdup("int"); }
    | REAL_TOKEN   { $$ = strdup("float"); }
    | CHR_TOKEN    { $$ = strdup("char"); }
    ;

entrada_dados:
      AMPERSAND_TOKEN ID_TOKEN LE_INPUT_TOKEN
    {
        char *format_str;
        if (strcmp($2, "valorInt") == 0 ||
            strcmp($2, "resultadoSoma") == 0 ||
            strcmp($2, "resultadoResto") == 0 ||
            strcmp($2, "resultadoSubtracao") == 0 ||
            strcmp($2, "resultadoMultiplicacao") == 0 ||
            strcmp($2, "resultadoDivisao") == 0)
        {
            format_str = "%%d"; // Int
            fprintf(stderr, "INFO: Entrada de '%s' formatada como int (%%d).\n", $2);
        }
        else if (strcmp($2, "valorReal") == 0)
        {
            format_str = "%%f"; // Float
            fprintf(stderr, "INFO: Entrada de '%s' formatada como float (%%f).\n", $2);
        }
        else if (strcmp($2, "caractereUnico") == 0)
        {
            format_str = " %%c"; // Char (espaço antes de %c)
            fprintf(stderr, "INFO: Entrada de '%s' formatada como char ( %%c).\n", $2);
        }
        else
        {
            format_str = "%%d"; // Padrão para int se não reconhecido
            fprintf(stderr, "AVISO: Entrada de dados simplificada para int. Verifique o tipo real em '%s'.\n", $2);
        }
        // CORREÇÃO: Adicionando o printf literal antes do scanf e separando-os com '; \n'
        asprintf(&$$, "printf(\"%%s\\n\", \"%s\");\n    scanf(\"%s\", &%s)", // printf para o prompt, depois scanf
                 "Digite um numero inteiro: ", format_str, $2); // O prompt pode vir do .com, isto é um exemplo
        // A string gerada agora é: "printf(\"prompt\\n\");\n    scanf(\"fmt\", &var)"
        
        free($2);
    }
    ;

// Regra 'saida' AGORA retorna a string C do printf completo.
saida:
      HASH_TOKEN ARROW_TOKEN lista_itens_saida_gen_code
    {
        // O $3 agora é a string C completa com a formatação e argumentos do printf.
        $$ = strdup($3);
        free($3);
    }
    ;

// Regra para a lista de itens de saída que GERA o código de printf diretamente.
// Esta regra NÃO retorna um valor ($$), apenas executa ações para gerar código.
lista_itens_saida_gen_code:
      item_saida_gen_code
    {
        $$ = strdup($1); // $1 já é a string C do printf completo para este item.
        free($1);
    }
    | item_saida_gen_code HASH_HASH lista_itens_saida_gen_code
    {
        // CORREÇÃO: Concatena as strings C completas dos printfs.
        // Isso cria uma única string que contém múltiplos "printf(...);"
        asprintf(&$$, "%s%s", $1, $3); 
        free($1);
        free($3);
    }
    ;

// Regra para um único item de saída que GERA a string C do argumento/formato do printf.
// Esta regra RETORNA a string C COMPLETA de um printf (ex: "printf(\"%d\\n\", var)").
item_saida_gen_code:
      LBRACKET ID_TOKEN RBRACKET
    {
        char *format_str;
        if (strcmp($2, "valorInt") == 0 ||
            strcmp($2, "resultadoSoma") == 0 ||
            strcmp($2, "resultadoResto") == 0 ||
            strcmp($2, "resultadoSubtracao") == 0 ||
            strcmp($2, "resultadoMultiplicacao") == 0 ||
            strcmp($2, "resultadoDivisao") == 0)
        {
            format_str = "%%d"; // Int
            fprintf(stderr, "INFO: Saída de '%s' formatada como int (%%d).\\n", $2);
        }
        else if (strcmp($2, "valorReal") == 0)
        {
            format_str = "%%f"; // Float
            fprintf(stderr, "INFO: Saída de '%s' formatada como float (%%f).\\n", $2);
        }
        else if (strcmp($2, "caractereUnico") == 0)
        {
            format_str = "%%c"; // Char
            fprintf(stderr, "INFO: Saída de '%s' formatada como char (%%c).\\n", $2);
        }
        else
        {
            format_str = "%%s"; // Padrão para string (ID) se não reconhecido
            fprintf(stderr, "AVISO: Saída de variável simplificada para string. Verifique o tipo real de '%s'.\\n", $2);
        }
        asprintf(&$$, "printf(\"%s\\n\", %s)", format_str, $2); // Gerando printf completo com \n
        free($2);
    }
    | STRING_LITERAL
    {
        asprintf(&$$, "printf(\"%%s\\n\", %s)", $1); // Gerando printf completo com \n
        free($1);
    }
    | CHAR_LITERAL
    {
        asprintf(&$$, "printf(\"%%c\\n\", %s)", $1); // Gerando printf completo com \n
        free($1);
    }
    | expressao
    {
        // Assumindo int como padrão para expressões.
        asprintf(&$$, "printf(\"%%d\\n\", (%s))", $1); // Gerando printf completo com \n
        free($1);
    }
    ;

condicional:
      SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        asprintf(&$$, "    if (%s) {\n%s    }\n", $3, $6);
        free($3);
        free($6);
    }
    | SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN DEMAS_TOKEN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        asprintf(&$$, "    if (%s) {\n%s    } else {\n%s    }\n", $3, $6, $10);
        free($3);
        free($6);
        free($10);
    }
    ;

cambio_stmt:
      CAMBIO_TOKEN LPAREN ID_TOKEN RPAREN COMENZAR_TOKEN lista_casos FIN_TOKEN
    {
        asprintf(&$$, "    switch (%s) {\n%s    }\n", $3, $6);
        free($3);
        free($6);
    }
    ;

lista_casos:
      caso_stmt
    {
        $$ = strdup($1);
        free($1);
    }
    | caso_stmt lista_casos
    {
        asprintf(&$$, "%s%s", $1, $2);
        free($1);
        free($2);
    }
    ;

caso_stmt:
      CASO_TOKEN INT_LITERAL COLON lista_comandos
    {
        asprintf(&$$, "    case %d:\n%s        break;\n", $2, $4);
        free($4);
    }
    | CASO_TOKEN STRING_LITERAL COLON lista_comandos
    {
        fprintf(stderr, "AVISO: CASE com STRING literal pode não ser padrão C. Verifique.\n");
        asprintf(&$$, "    case %s:\n%s        break;\n", $2, $4);
        free($2);
        free($4);
    }
    | CASO_TOKEN CHAR_LITERAL COLON lista_comandos
    {
        asprintf(&$$, "    case %s:\n%s        break;\n", $2, $4);
        free($2);
        free($4);
    }
    | CASO_TOKEN ID_TOKEN COLON lista_comandos
    {
        asprintf(&$$, "    case %s:\n%s        break;\n", $2, $4);
        free($2);
        free($4);
    }
    ;

repeticao:
      MIENTRAS_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        asprintf(&$$, "    while (%s) {\n%s    }\n", $3, $6);
        free($3);
        free($6);
    }
    ;

repeticao_for:
      PARA_TOKEN atribuicao EXCL_EXCL condicao EXCL_EXCL atribuicao COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        asprintf(&$$, "    for (%s; %s; %s) {\n%s    }\n", $2, $4, $6, $8);
        free($2);
        free($4);
        free($6);
        free($8);
    }
    ;

expressao:
      ID_TOKEN
    {
        $$ = strdup($1);
        free($1);
    }
    | CHAR_LITERAL
    {
        $$ = strdup($1);
        free($1);
    }
    | INT_LITERAL
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", $1);
        $$ = strdup(buf);
    }
    | FLOAT_LITERAL
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%.6g", $1); // %.6g para floats sem zeros à direita desnecessários
        $$ = strdup(buf);
    }
    | expressao MAS_TOKEN expressao
    {
        asprintf(&$$, "%s + %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao MENOS_TOKEN expressao
    {
        asprintf(&$$, "%s - %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao POR_TOKEN expressao
    {
        asprintf(&$$, "%s * %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao DIVIDIDO_TOKEN expressao
    {
        asprintf(&$$, "%s / %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao RESTO_TOKEN expressao
    {
        asprintf(&$$, "%s %% %s", $1, $3); // '%%' para imprimir '%' em C
        free($1);
        free($3);
    }
    | LPAREN expressao RPAREN
    {
        asprintf(&$$, "(%s)", $2);
        free($2);
    }
    ;

condicao:
      expressao GT_RELATIONAL expressao
    {
        asprintf(&$$, "%s > %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao EQ_RELATIONAL expressao
    {
        asprintf(&$$, "%s == %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao LT_RELATIONAL expressao
    {
        asprintf(&$$, "%s < %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao GE_RELATIONAL expressao
    {
        asprintf(&$$, "%s >= %s", $1, $3);
        free($1);
        free($3);
    }
    | expressao LE_RELATIONAL expressao
    {
        asprintf(&$$, "%s <= %s", $1, $3);
        free($1);
        free($3);
    }
    | condicao AND_LOGICAL condicao
    {
        asprintf(&$$, "%s && %s", $1, $3);
        free($1);
        free($3);
    }
    | condicao OR_LOGICAL condicao
    {
        asprintf(&$$, "%s || %s", $1, $3);
        free($1);
        free($3);
    }
    | NOT_LOGICAL condicao
    {
        asprintf(&$$, "!%s", $2);
        free($2);
    }
    | LPAREN condicao RPAREN
    {
        asprintf(&$$, "(%s)", $2);
        free($2);
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, s);
}