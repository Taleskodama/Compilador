/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ANALISADOR_SINTATICO_TAB_H_INCLUDED
# define YY_YY_ANALISADOR_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ENT_TOKEN = 258,               /* ENT_TOKEN  */
    REAL_TOKEN = 259,              /* REAL_TOKEN  */
    CHR_TOKEN = 260,               /* CHR_TOKEN  */
    SI_TOKEN = 261,                /* SI_TOKEN  */
    DEMAS_TOKEN = 262,             /* DEMAS_TOKEN  */
    CAMBIO_TOKEN = 263,            /* CAMBIO_TOKEN  */
    CASO_TOKEN = 264,              /* CASO_TOKEN  */
    MIENTRAS_TOKEN = 265,          /* MIENTRAS_TOKEN  */
    PARA_TOKEN = 266,              /* PARA_TOKEN  */
    MAS_TOKEN = 267,               /* MAS_TOKEN  */
    MENOS_TOKEN = 268,             /* MENOS_TOKEN  */
    POR_TOKEN = 269,               /* POR_TOKEN  */
    DIVIDIDO_TOKEN = 270,          /* DIVIDIDO_TOKEN  */
    RESTO_TOKEN = 271,             /* RESTO_TOKEN  */
    COMENZAR_TOKEN = 272,          /* COMENZAR_TOKEN  */
    FIN_TOKEN = 273,               /* FIN_TOKEN  */
    ATRIB_TOKEN = 274,             /* ATRIB_TOKEN  */
    AMPERSAND_TOKEN = 275,         /* AMPERSAND_TOKEN  */
    LE_INPUT_TOKEN = 276,          /* LE_INPUT_TOKEN  */
    HASH_TOKEN = 277,              /* HASH_TOKEN  */
    ARROW_TOKEN = 278,             /* ARROW_TOKEN  */
    LBRACKET = 279,                /* LBRACKET  */
    RBRACKET = 280,                /* RBRACKET  */
    HASH_HASH = 281,               /* HASH_HASH  */
    EXCL_EXCL = 282,               /* EXCL_EXCL  */
    SEMI_SEMI = 283,               /* SEMI_SEMI  */
    LBLOCK_DELIMITER = 284,        /* LBLOCK_DELIMITER  */
    RBLOCK_DELIMITER = 285,        /* RBLOCK_DELIMITER  */
    LPAREN = 286,                  /* LPAREN  */
    RPAREN = 287,                  /* RPAREN  */
    COLON = 288,                   /* COLON  */
    GT_RELATIONAL = 289,           /* GT_RELATIONAL  */
    LT_RELATIONAL = 290,           /* LT_RELATIONAL  */
    GE_RELATIONAL = 291,           /* GE_RELATIONAL  */
    LE_RELATIONAL = 292,           /* LE_RELATIONAL  */
    AND_LOGICAL = 293,             /* AND_LOGICAL  */
    OR_LOGICAL = 294,              /* OR_LOGICAL  */
    NOT_LOGICAL = 295,             /* NOT_LOGICAL  */
    ID_TOKEN = 296,                /* ID_TOKEN  */
    STRING_LITERAL = 297,          /* STRING_LITERAL  */
    INT_LITERAL = 298,             /* INT_LITERAL  */
    FLOAT_LITERAL = 299            /* FLOAT_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "analisador_sintatico.y"

    int int_val;
    float float_val;
    char *str_val;

#line 114 "analisador_sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ANALISADOR_SINTATICO_TAB_H_INCLUDED  */
