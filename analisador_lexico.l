%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "analisador_sintatico.tab.h"  // header gerado pelo Bison

extern YYSTYPE yylval;
FILE *yyout_tokens;
%}

%option noyywrap
%option yylineno

/* ===== DEFINIÇÕES DE MACROS ===== */
letra            [A-Za-z]
digito           [0-9]
identificador    {letra}({letra}|{digito})*
numero_inteiro   {digito}+
numero_real      ({digito}+\.{digito}*|{digito}*\.{digito}+)([eE][-+]?{digito}+)?

%%

"ent"            { fprintf(yyout_tokens, "%s -> tipo de dado: inteiro\n", yytext); return ENT_TOKEN; }
"real"           { fprintf(yyout_tokens, "%s -> tipo de dado: real\n", yytext); return REAL_TOKEN; }
"chr"            { fprintf(yyout_tokens, "%s -> tipo de dado: caractere\n", yytext); return CHR_TOKEN; }

"si"             { fprintf(yyout_tokens, "%s -> comando condicional: if\n", yytext); return SI_TOKEN; }
"demas"          { fprintf(yyout_tokens, "%s -> comando condicional: else\n", yytext); return DEMAS_TOKEN; }
"cambio"         { fprintf(yyout_tokens, "%s -> comando condicional: switch\n", yytext); return CAMBIO_TOKEN; }
"caso"           { fprintf(yyout_tokens, "%s -> comando condicional: case\n", yytext); return CASO_TOKEN; }

"mientras"       { fprintf(yyout_tokens, "%s -> comando de repetição: while\n", yytext); return MIENTRAS_TOKEN; }
"para"           { fprintf(yyout_tokens, "%s -> comando de repetição: for\n", yytext); return PARA_TOKEN; }

"mas"            { fprintf(yyout_tokens, "%s -> operador aritmético: soma\n", yytext); return MAS_TOKEN; }
"menos"          { fprintf(yyout_tokens, "%s -> operador aritmético: subtração\n", yytext); return MENOS_TOKEN; }
"por"            { fprintf(yyout_tokens, "%s -> operador aritmético: multiplicação\n", yytext); return POR_TOKEN; }
"dividido"       { fprintf(yyout_tokens, "%s -> operador aritmético: divisão\n", yytext); return DIVIDIDO_TOKEN; }
"resto"          { fprintf(yyout_tokens, "%s -> operador aritmético: resto da divisão\n", yytext); return RESTO_TOKEN; }

"comenzar"       { fprintf(yyout_tokens, "%s -> delimitador de bloco: iniciar\n", yytext); return COMENZAR_TOKEN; }
"fin"            { fprintf(yyout_tokens, "%s -> delimitador de bloco: finalizar\n", yytext); return FIN_TOKEN; }

{identificador}  {
    fprintf(yyout_tokens, "%s -> identificador\n", yytext);
    yylval.str_val = strdup(yytext);
    return ID_TOKEN;
}
{numero_inteiro} {
    fprintf(yyout_tokens, "%s -> número inteiro\n", yytext);
    yylval.int_val = atoi(yytext);
    return INT_LITERAL;
}
{numero_real}    {
    fprintf(yyout_tokens, "%s -> número real\n", yytext);
    yylval.float_val = atof(yytext);
    return FLOAT_LITERAL;
}

":="             { fprintf(yyout_tokens, "%s -> operador de atribuição\n", yytext); return ATRIB_TOKEN; }
"&"              { fprintf(yyout_tokens, "%s -> símbolo de entrada\n", yytext); return AMPERSAND_TOKEN; }
"<="             { fprintf(yyout_tokens, "%s -> operador de entrada (leitura)\n", yytext); return LE_INPUT_TOKEN; }
"#"              { fprintf(yyout_tokens, "%s -> símbolo de saída\n", yytext); return HASH_TOKEN; }
"=>"             { fprintf(yyout_tokens, "%s -> operador de saída (exibição)\n", yytext); return ARROW_TOKEN; }
"["              { fprintf(yyout_tokens, "%s -> parêntese reto esquerdo\n", yytext); return LBRACKET; }
"]"              { fprintf(yyout_tokens, "%s -> parêntese reto direito\n", yytext); return RBRACKET; }
"##"             { fprintf(yyout_tokens, "%s -> separador de itens\n", yytext); return HASH_HASH; }
"!!"             { fprintf(yyout_tokens, "%s -> fim de instrução/sentença\n", yytext); return EXCL_EXCL; }
";;"             { fprintf(yyout_tokens, "%s -> quebra de linha\n", yytext); return SEMI_SEMI; }
"@{" { fprintf(yyout_tokens, "%s -> parêntese esquerdo\n", yytext); return LPAREN; } // Reutilizando LPAREN
 "}@" { fprintf(yyout_tokens, "%s -> parêntese direito\n", yytext); return RPAREN; } // Reutilizando RPAREN
":::"            { fprintf(yyout_tokens, "%s -> dois pontos\n", yytext); return COLON; }

">>"             { fprintf(yyout_tokens, "%s -> operador relacional: maior que\n", yytext); return GT_RELATIONAL; }
"[*"             { fprintf(yyout_tokens, "%s -> operador relacional: menor ou igual\n", yytext); return LE_RELATIONAL; }
"]*"             { fprintf(yyout_tokens, "%s -> operador relacional: maior ou igual\n", yytext); return GE_RELATIONAL; }
"<<"              { fprintf(yyout_tokens, "%s -> operador relacional: menor que\n", yytext); return LT_RELATIONAL; }
"="              { fprintf(yyout_tokens, "%s -> operador relacional: igual a\n", yytext); return EQ_RELATIONAL; }

"<<>>"           { fprintf(yyout_tokens, "%s -> operador lógico: AND\n", yytext); return AND_LOGICAL; }
"<|>"            { fprintf(yyout_tokens, "%s -> operador lógico: OR\n", yytext); return OR_LOGICAL; }
"!~"             { fprintf(yyout_tokens, "%s -> operador lógico: NOT\n", yytext); return NOT_LOGICAL; }

[ \t\r\n]+       { /* ignora espaços em branco */ }

\"(\\.|[^\"\\])*\" {
    fprintf(yyout_tokens, "%s -> string literal\n", yytext);
    yylval.str_val = strdup(yytext);
    return STRING_LITERAL;
}
"'"(.|\\.)"'" {
    fprintf(yyout_tokens, "%s -> caractere literal\n", yytext);
    // Para passar o valor do caractere para o parser, você pode usar yylval.char_val
    // ou se você passa tudo como string, strdup(yytext)
    yylval.str_val = strdup(yytext); // Ou yylval.char_val = yytext[1]; se seu union tiver um char
    return CHAR_LITERAL; // Retorna um novo token para caractere literal
}

. {
    fprintf(stderr, "Erro léxico na linha %d: caractere ou sequência inválida '%s'\n", yylineno, yytext);
    return -1;
}

%%

#undef yywrap
int yywrap(void) {
    return 1;
}
