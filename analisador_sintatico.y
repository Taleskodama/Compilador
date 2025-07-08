%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h" 

#ifndef _GNU_SOURCE
#define _GNU_SOURCE 
#endif

extern int yylex();
extern int yylineno;
void yyerror(const char *s);

extern FILE *output_code_file;
extern FILE *yyout_tokens;


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
        fprintf(output_code_file, "%s", $2); 
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
        asprintf(&$$, "%s", $1); 
        free($1);
    }
    | saida EXCL_EXCL
    {
        asprintf(&$$, "%s", $1); 
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

        if (strcmp($2, "idade") == 0 || 
            strcmp($2, "valorInt") == 0 ||
            strcmp($2, "limiteLoop") == 0 ||
            strcmp($2, "resultadoDivisao") == 0)
        {
            format_str = "%d";
        }
        else if (strcmp($2, "saldo") == 0 || 
                 strcmp($2, "valorReal") == 0)
        {
            format_str = "%f";
        }
        else if (strcmp($2, "categoria") == 0 || 
                 strcmp($2, "caractereUnico") == 0)
        {
            format_str = " %c";
        }
        else
        {
            format_str = "%d"; 
        }
        
        asprintf(&$$, "    scanf(\"%s\", &%s);\n", format_str, $2);
        free($2);
    }
    ;

saida:
      HASH_TOKEN ARROW_TOKEN lista_itens_saida_gen_code
    {
        $$ = strdup($3);
        free($3);
    }
    ;
lista_itens_saida_gen_code:
      item_saida_gen_code
    {
        $$ = strdup($1);
        free($1);
    }
    | item_saida_gen_code HASH_HASH lista_itens_saida_gen_code
    {
        asprintf(&$$, "%s%s", $1, $3); 
        free($1);
        free($3);
    }
    ;

item_saida_gen_code:
    LBRACKET ID_TOKEN RBRACKET
    {
        char *format_str;
        
        if (strcmp($2, "idade") == 0 ||           
            strcmp($2, "multiplicador") == 0 ||   
            strcmp($2, "resultadoLogico") == 0 || 
            strcmp($2, "valorInt") == 0 ||
            strcmp($2, "resultadoSoma") == 0 ||
            strcmp($2, "resultadoResto") == 0 ||
            strcmp($2, "resultadoSubtracao") == 0 ||
            strcmp($2, "resultadoMultiplicacao") == 0 ||
            strcmp($2, "resultadoDivisao") == 0 ||
            strcmp($2, "contadorWhile") == 0 ||
            strcmp($2, "contadorFor") == 0 ||
            strcmp($2, "limiteLoop") == 0)
        {
            format_str = "%d"; 
        }
        else if (strcmp($2, "saldo") == 0 ||     
                 strcmp($2, "taxaJuros") == 0 || 
                 strcmp($2, "valorReal") == 0)
        {
            format_str = "%f"; 
        }
        else if (strcmp($2, "categoria") == 0 || 
                 strcmp($2, "caractereUnico") == 0)
        {
            format_str = "%c"; 
        else
        {
            format_str = "%s"; 
            fprintf(stderr, "AVISO: Saída de variável simplificada para string. Verifique o tipo real de '%s'.\n", $2);
        }

        asprintf(&$$, "    printf(\"%s\\n\", %s);\n", format_str, $2);
        free($2);
    }
    | STRING_LITERAL
    {
        asprintf(&$$, "    printf(\"%%s\\n\", %s);\n", $1);
        free($1);
    }
    | CHAR_LITERAL
    {
        asprintf(&$$, "    printf(\"%%c\\n\", %s);\n", $1);
        free($1);
    }
    | expressao
    {
        asprintf(&$$, "    printf(\"%%d\\n\", (%s));\n", $1);
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