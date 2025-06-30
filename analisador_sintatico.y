%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno; 
void yyerror(const char *s);


FILE *output_code_file;
extern FILE *yyout_tokens;
%}

%union {
    int int_val;
    float float_val;
    char *str_val;
}

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

%type <str_val> expressao condicao lista_itens_saida item_saida
%token <str_val> ID_TOKEN STRING_LITERAL CHAR_LITERAL
%token <int_val> INT_LITERAL
%token <float_val> FLOAT_LITERAL

%start programa

%left OR_LOGICAL
%left AND_LOGICAL
%right NOT_LOGICAL
%nonassoc GT_RELATIONAL LT_RELATIONAL GE_RELATIONAL LE_RELATIONAL
%left MAS_TOKEN MENOS_TOKEN
%left POR_TOKEN DIVIDIDO_TOKEN RESTO_TOKEN

%%

programa:
      COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("Análise sintática concluída com sucesso.\n");
    }
;

lista_comandos:
      comando
    | comando lista_comandos
;

comando:
      atribuicao EXCL_EXCL
    | declaracao EXCL_EXCL 
    | entrada_dados EXCL_EXCL 
    | saida EXCL_EXCL
    | condicional
    | repeticao
    | repeticao_for
    | cambio_stmt
;

atribuicao:
      ID_TOKEN ATRIB_TOKEN expressao
    {
        printf("Atribuição: %s := %s\n", $1, $3);
        free($1);
        free($3);
    }
;

declaracao:
      ENT_TOKEN ID_TOKEN
    {
        printf("Variavel inteira declarada: %s\n", $2);
        free($2);
    }
    | REAL_TOKEN ID_TOKEN
    {
        printf("Variavel real declarada: %s\n", $2);
        free($2);
    }
    | CHR_TOKEN ID_TOKEN
    {
        printf("Variavel caractere declarada: %s\n", $2);
        free($2);
    }
;

entrada_dados:
      AMPERSAND_TOKEN ID_TOKEN LE_INPUT_TOKEN
    {
        printf("Entrada para variavel: %s\n", $2);
        free($2);
    }
;

saida:
      HASH_TOKEN ARROW_TOKEN lista_itens_saida
    {
        printf("Saida: %s\n", $3); 
        free($3);
    }
;
lista_itens_saida:
      item_saida
    {
        $$ = strdup($1);
        free($1);
    }
    | item_saida HASH_HASH lista_itens_saida 
    {
        asprintf(&$$, "%s ## %s", $1, $3);
        free($1);
        free($3);
    }
;

item_saida:
      LBRACKET ID_TOKEN RBRACKET
    {
        asprintf(&$$, "[%s]", $2); 
        free($2);
    }
    | STRING_LITERAL
    {
        $$ = strdup($1);
        free($1);
    }
    
    | expressao
    {
        $$ = strdup($1);
        free($1);
    }
;

condicional:
      SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("Condicional IF: %s\n", $3);
        free($3);
    }
    | SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN DEMAS_TOKEN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("Condicional IF-ELSE: %s\n", $3);
        free($3);
    }
;

cambio_stmt:
      CAMBIO_TOKEN LPAREN ID_TOKEN RPAREN COMENZAR_TOKEN lista_casos FIN_TOKEN
    {
        printf("Switch com variável: %s\n", $3);
        free($3);
    }
;

lista_casos:
      caso_stmt
    | caso_stmt lista_casos
;

caso_stmt:
      CASO_TOKEN INT_LITERAL COLON lista_comandos
    {
        printf("CASE com INT: %d\n", $2);
    }
    | CASO_TOKEN STRING_LITERAL COLON lista_comandos
    {
        printf("CASE com STRING: %s\n", $2);
        free($2);
    }
    | CASO_TOKEN CHAR_LITERAL COLON lista_comandos
    {
        printf("CASE com CHAR: %s\n", $2); 
        free($2);
    }
    | CASO_TOKEN ID_TOKEN COLON lista_comandos
    {
        printf("CASE com ID: %s\n", $2);
        free($2);
    }
;

repeticao:
      MIENTRAS_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("While com condição: %s\n", $3);
        free($3);
    }
;

repeticao_for:
      PARA_TOKEN atribuicao EXCL_EXCL condicao EXCL_EXCL atribuicao COMENZAR_TOKEN lista_comandos FIN_TOKEN
    {
        printf("Bloco FOR analisado.\n");
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
        snprintf(buf, sizeof(buf), "%.6g", $1);
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
        asprintf(&$$, "%s %% %s", $1, $3);
        free($1);
        free($3);
    }
    | LPAREN expressao RPAREN
    {
        $$ = $2;
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
        $$ = $2;
    }
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, s);
}
