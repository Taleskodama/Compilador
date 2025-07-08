/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "analisador_sintatico.y"

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

#line 92 "analisador_sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "analisador_sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENT_TOKEN = 3,                  /* ENT_TOKEN  */
  YYSYMBOL_REAL_TOKEN = 4,                 /* REAL_TOKEN  */
  YYSYMBOL_CHR_TOKEN = 5,                  /* CHR_TOKEN  */
  YYSYMBOL_SI_TOKEN = 6,                   /* SI_TOKEN  */
  YYSYMBOL_DEMAS_TOKEN = 7,                /* DEMAS_TOKEN  */
  YYSYMBOL_CAMBIO_TOKEN = 8,               /* CAMBIO_TOKEN  */
  YYSYMBOL_CASO_TOKEN = 9,                 /* CASO_TOKEN  */
  YYSYMBOL_MIENTRAS_TOKEN = 10,            /* MIENTRAS_TOKEN  */
  YYSYMBOL_PARA_TOKEN = 11,                /* PARA_TOKEN  */
  YYSYMBOL_MAS_TOKEN = 12,                 /* MAS_TOKEN  */
  YYSYMBOL_MENOS_TOKEN = 13,               /* MENOS_TOKEN  */
  YYSYMBOL_POR_TOKEN = 14,                 /* POR_TOKEN  */
  YYSYMBOL_DIVIDIDO_TOKEN = 15,            /* DIVIDIDO_TOKEN  */
  YYSYMBOL_RESTO_TOKEN = 16,               /* RESTO_TOKEN  */
  YYSYMBOL_COMENZAR_TOKEN = 17,            /* COMENZAR_TOKEN  */
  YYSYMBOL_FIN_TOKEN = 18,                 /* FIN_TOKEN  */
  YYSYMBOL_ATRIB_TOKEN = 19,               /* ATRIB_TOKEN  */
  YYSYMBOL_AMPERSAND_TOKEN = 20,           /* AMPERSAND_TOKEN  */
  YYSYMBOL_LE_INPUT_TOKEN = 21,            /* LE_INPUT_TOKEN  */
  YYSYMBOL_HASH_TOKEN = 22,                /* HASH_TOKEN  */
  YYSYMBOL_ARROW_TOKEN = 23,               /* ARROW_TOKEN  */
  YYSYMBOL_LBRACKET = 24,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 25,                  /* RBRACKET  */
  YYSYMBOL_HASH_HASH = 26,                 /* HASH_HASH  */
  YYSYMBOL_EXCL_EXCL = 27,                 /* EXCL_EXCL  */
  YYSYMBOL_SEMI_SEMI = 28,                 /* SEMI_SEMI  */
  YYSYMBOL_LPAREN = 29,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 30,                    /* RPAREN  */
  YYSYMBOL_COLON = 31,                     /* COLON  */
  YYSYMBOL_GT_RELATIONAL = 32,             /* GT_RELATIONAL  */
  YYSYMBOL_LT_RELATIONAL = 33,             /* LT_RELATIONAL  */
  YYSYMBOL_GE_RELATIONAL = 34,             /* GE_RELATIONAL  */
  YYSYMBOL_LE_RELATIONAL = 35,             /* LE_RELATIONAL  */
  YYSYMBOL_EQ_RELATIONAL = 36,             /* EQ_RELATIONAL  */
  YYSYMBOL_AND_LOGICAL = 37,               /* AND_LOGICAL  */
  YYSYMBOL_OR_LOGICAL = 38,                /* OR_LOGICAL  */
  YYSYMBOL_NOT_LOGICAL = 39,               /* NOT_LOGICAL  */
  YYSYMBOL_ID_TOKEN = 40,                  /* ID_TOKEN  */
  YYSYMBOL_STRING_LITERAL = 41,            /* STRING_LITERAL  */
  YYSYMBOL_CHAR_LITERAL = 42,              /* CHAR_LITERAL  */
  YYSYMBOL_INT_LITERAL = 43,               /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 44,             /* FLOAT_LITERAL  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_programa = 46,                  /* programa  */
  YYSYMBOL_lista_comandos = 47,            /* lista_comandos  */
  YYSYMBOL_comando = 48,                   /* comando  */
  YYSYMBOL_atribuicao = 49,                /* atribuicao  */
  YYSYMBOL_declaracao = 50,                /* declaracao  */
  YYSYMBOL_tipo = 51,                      /* tipo  */
  YYSYMBOL_entrada_dados = 52,             /* entrada_dados  */
  YYSYMBOL_saida = 53,                     /* saida  */
  YYSYMBOL_lista_itens_saida_gen_code = 54, /* lista_itens_saida_gen_code  */
  YYSYMBOL_item_saida_gen_code = 55,       /* item_saida_gen_code  */
  YYSYMBOL_condicional = 56,               /* condicional  */
  YYSYMBOL_cambio_stmt = 57,               /* cambio_stmt  */
  YYSYMBOL_lista_casos = 58,               /* lista_casos  */
  YYSYMBOL_caso_stmt = 59,                 /* caso_stmt  */
  YYSYMBOL_repeticao = 60,                 /* repeticao  */
  YYSYMBOL_repeticao_for = 61,             /* repeticao_for  */
  YYSYMBOL_expressao = 62,                 /* expressao  */
  YYSYMBOL_condicao = 63                   /* condicao  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    77,    82,    91,    96,   101,   106,   113,
     118,   123,   128,   136,   145,   154,   155,   156,   160,   199,
     210,   215,   228,   259,   264,   269,   278,   284,   294,   303,
     308,   317,   322,   329,   335,   344,   353,   364,   369,   374,
     380,   386,   392,   398,   404,   410,   416,   424,   430,   436,
     442,   448,   454,   460,   466,   471
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ENT_TOKEN",
  "REAL_TOKEN", "CHR_TOKEN", "SI_TOKEN", "DEMAS_TOKEN", "CAMBIO_TOKEN",
  "CASO_TOKEN", "MIENTRAS_TOKEN", "PARA_TOKEN", "MAS_TOKEN", "MENOS_TOKEN",
  "POR_TOKEN", "DIVIDIDO_TOKEN", "RESTO_TOKEN", "COMENZAR_TOKEN",
  "FIN_TOKEN", "ATRIB_TOKEN", "AMPERSAND_TOKEN", "LE_INPUT_TOKEN",
  "HASH_TOKEN", "ARROW_TOKEN", "LBRACKET", "RBRACKET", "HASH_HASH",
  "EXCL_EXCL", "SEMI_SEMI", "LPAREN", "RPAREN", "COLON", "GT_RELATIONAL",
  "LT_RELATIONAL", "GE_RELATIONAL", "LE_RELATIONAL", "EQ_RELATIONAL",
  "AND_LOGICAL", "OR_LOGICAL", "NOT_LOGICAL", "ID_TOKEN", "STRING_LITERAL",
  "CHAR_LITERAL", "INT_LITERAL", "FLOAT_LITERAL", "$accept", "programa",
  "lista_comandos", "comando", "atribuicao", "declaracao", "tipo",
  "entrada_dados", "saida", "lista_itens_saida_gen_code",
  "item_saida_gen_code", "condicional", "cambio_stmt", "lista_casos",
  "caso_stmt", "repeticao", "repeticao_for", "expressao", "condicao", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-29)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-25)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    51,    19,   -29,   -29,   -29,    -4,    -2,    -1,   -18,
       4,    30,    39,    42,    51,    37,    43,    32,    54,    57,
     -29,   -29,   -29,   -29,   -29,    70,    46,    70,    73,    61,
     -11,    78,   -29,   -29,   -29,   -29,   -29,   -29,   -29,    70,
      70,   -29,   -29,   -29,   -29,    62,    50,    59,    55,    70,
     -29,    71,    78,   -29,   -12,   -29,    76,   113,   113,    33,
      86,   -29,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    98,    70,    70,   100,   102,   -17,   112,    -7,
     -11,   -29,   -29,   120,   120,   -29,   -29,   -29,   113,   113,
     113,   113,   113,    51,   -29,   101,   130,    51,   -18,   -29,
     -29,   122,    90,   123,   130,   124,   126,   137,   114,   115,
     116,   117,   -29,   -29,   -29,    51,   132,    51,    51,    51,
      51,   133,    51,   -29,   -29,   -29,   -29,   -29,   134,   -29
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       9,    12,    10,    11,     1,     0,     0,     0,     0,     0,
       0,     0,     2,     4,     5,     6,    14,     7,     8,     0,
       0,    37,    38,    39,    40,     0,     0,     0,     0,     0,
      18,     0,     0,    23,    38,    19,    20,    25,    13,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    55,    41,    42,    43,    44,    45,    47,    49,
      50,    51,    48,     0,    52,    53,     0,     0,     0,    22,
      21,     0,     0,     0,    29,     0,     0,    26,     0,     0,
       0,     0,    28,    30,    35,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    32,    33,    31,    36,     0,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -29,   -29,   -14,   -29,    -8,   -29,   -29,   -29,   -29,    74,
     -29,   -29,   -29,    49,   -29,   -29,   -29,   -28,   -23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    13,    14,    15,    16,    17,    18,    19,    55,
      56,    20,    21,   103,   104,    22,    23,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    28,    57,    58,    48,    62,    63,    64,    65,    66,
      98,    59,     1,    51,   -24,   -24,    60,    61,    52,    24,
      73,    74,    12,    81,    79,    25,    77,    26,    27,    41,
      53,    54,    43,    44,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    29,    62,    63,    64,    65,    66,
      94,    95,    57,    30,     3,     4,     5,     6,    31,     7,
      32,     8,     9,    81,    34,    67,    68,    69,    70,    71,
      35,    10,    36,    11,    62,    63,    64,    65,    66,   101,
      72,    37,    50,   105,    38,    76,    47,    73,    74,    75,
     106,    12,    73,    74,    67,    68,    69,    70,    71,    39,
      49,   121,    80,   123,   124,   125,   126,    52,   128,    40,
      41,    78,    42,    43,    44,    93,    82,    96,    41,    97,
      42,    43,    44,    73,    74,    62,    63,    64,    65,    66,
     108,   109,   110,   111,    64,    65,    66,    99,    73,   102,
     107,   112,   114,   115,   116,   117,   118,   119,   120,   122,
       0,   127,   129,   113,   100
};

static const yytype_int8 yycheck[] =
{
      14,     9,    30,    31,    27,    12,    13,    14,    15,    16,
      27,    39,    17,    24,    26,    27,    39,    40,    29,     0,
      37,    38,    40,    30,    52,    29,    49,    29,    29,    40,
      41,    42,    43,    44,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    40,    12,    13,    14,    15,    16,
      73,    74,    80,    23,     3,     4,     5,     6,    19,     8,
      18,    10,    11,    30,    27,    32,    33,    34,    35,    36,
      27,    20,    40,    22,    12,    13,    14,    15,    16,    93,
      30,    27,    21,    97,    27,    30,    40,    37,    38,    30,
      98,    40,    37,    38,    32,    33,    34,    35,    36,    29,
      27,   115,    26,   117,   118,   119,   120,    29,   122,    39,
      40,    40,    42,    43,    44,    17,    30,    17,    40,    17,
      42,    43,    44,    37,    38,    12,    13,    14,    15,    16,
      40,    41,    42,    43,    14,    15,    16,    25,    37,     9,
      18,    18,    18,    17,     7,    31,    31,    31,    31,    17,
      -1,    18,    18,   104,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    46,     3,     4,     5,     6,     8,    10,    11,
      20,    22,    40,    47,    48,    49,    50,    51,    52,    53,
      56,    57,    60,    61,     0,    29,    29,    29,    49,    40,
      23,    19,    18,    47,    27,    27,    40,    27,    27,    29,
      39,    40,    42,    43,    44,    62,    63,    40,    63,    27,
      21,    24,    29,    41,    42,    54,    55,    62,    62,    62,
      63,    63,    12,    13,    14,    15,    16,    32,    33,    34,
      35,    36,    30,    37,    38,    30,    30,    63,    40,    62,
      26,    30,    30,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    17,    63,    63,    17,    17,    27,    25,
      54,    47,     9,    58,    59,    47,    49,    18,    40,    41,
      42,    43,    18,    58,    18,    17,     7,    31,    31,    31,
      31,    47,    17,    47,    47,    47,    47,    18,    47,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    49,    50,    51,    51,    51,    52,    53,
      54,    54,    55,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    60,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     7,    11,     7,     1,
       2,     4,     4,     4,     4,     7,     9,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 60 "analisador_sintatico.y"
    {
        printf("Análise sintática concluída com sucesso. Programa válido!\n");

        fprintf(output_code_file, "#include <stdio.h>\n");
        fprintf(output_code_file, "#include <stdlib.h>\n");
        fprintf(output_code_file, "#include <string.h>\n\n");
        
        fprintf(output_code_file, "int main() {\n");
        fprintf(output_code_file, "%s", (yyvsp[-1].str_val)); // Código dos comandos
        fprintf(output_code_file, "    return 0;\n");
        fprintf(output_code_file, "}\n");
        
        free((yyvsp[-1].str_val));
    }
#line 1240 "analisador_sintatico.tab.c"
    break;

  case 3: /* lista_comandos: comando  */
#line 78 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1249 "analisador_sintatico.tab.c"
    break;

  case 4: /* lista_comandos: comando lista_comandos  */
#line 83 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s%s", (yyvsp[-1].str_val), (yyvsp[0].str_val));
        free((yyvsp[-1].str_val));
        free((yyvsp[0].str_val));
    }
#line 1259 "analisador_sintatico.tab.c"
    break;

  case 5: /* comando: atribuicao EXCL_EXCL  */
#line 92 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    %s;\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1268 "analisador_sintatico.tab.c"
    break;

  case 6: /* comando: declaracao EXCL_EXCL  */
#line 97 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    %s;\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1277 "analisador_sintatico.tab.c"
    break;

  case 7: /* comando: entrada_dados EXCL_EXCL  */
#line 102 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    %s;\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1286 "analisador_sintatico.tab.c"
    break;

  case 8: /* comando: saida EXCL_EXCL  */
#line 107 "analisador_sintatico.y"
    {
        // A regra 'saida' agora passa o código C completo do printf(s) que gerou.
        // ex: $$ = "printf(\"fmt\", arg);"
        asprintf(&(yyval.str_val), "%s", (yyvsp[-1].str_val)); // $1 é a string C gerada por 'saida'
        free((yyvsp[-1].str_val));
    }
#line 1297 "analisador_sintatico.tab.c"
    break;

  case 9: /* comando: condicional  */
#line 114 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1306 "analisador_sintatico.tab.c"
    break;

  case 10: /* comando: repeticao  */
#line 119 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1315 "analisador_sintatico.tab.c"
    break;

  case 11: /* comando: repeticao_for  */
#line 124 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1324 "analisador_sintatico.tab.c"
    break;

  case 12: /* comando: cambio_stmt  */
#line 129 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1333 "analisador_sintatico.tab.c"
    break;

  case 13: /* atribuicao: ID_TOKEN ATRIB_TOKEN expressao  */
#line 137 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    %s = %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1343 "analisador_sintatico.tab.c"
    break;

  case 14: /* declaracao: tipo ID_TOKEN  */
#line 146 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    %s %s", (yyvsp[-1].str_val), (yyvsp[0].str_val));
        free((yyvsp[-1].str_val));
        free((yyvsp[0].str_val));
    }
#line 1353 "analisador_sintatico.tab.c"
    break;

  case 15: /* tipo: ENT_TOKEN  */
#line 154 "analisador_sintatico.y"
                   { (yyval.str_val) = strdup("int"); }
#line 1359 "analisador_sintatico.tab.c"
    break;

  case 16: /* tipo: REAL_TOKEN  */
#line 155 "analisador_sintatico.y"
                   { (yyval.str_val) = strdup("float"); }
#line 1365 "analisador_sintatico.tab.c"
    break;

  case 17: /* tipo: CHR_TOKEN  */
#line 156 "analisador_sintatico.y"
                   { (yyval.str_val) = strdup("char"); }
#line 1371 "analisador_sintatico.tab.c"
    break;

  case 18: /* entrada_dados: AMPERSAND_TOKEN ID_TOKEN LE_INPUT_TOKEN  */
#line 161 "analisador_sintatico.y"
    {
        char *format_str;
        if (strcmp((yyvsp[-1].str_val), "valorInt") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoSoma") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoResto") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoSubtracao") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoMultiplicacao") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoDivisao") == 0)
        {
            format_str = "%%d"; // Int
            fprintf(stderr, "INFO: Entrada de '%s' formatada como int (%%d).\n", (yyvsp[-1].str_val));
        }
        else if (strcmp((yyvsp[-1].str_val), "valorReal") == 0)
        {
            format_str = "%%f"; // Float
            fprintf(stderr, "INFO: Entrada de '%s' formatada como float (%%f).\n", (yyvsp[-1].str_val));
        }
        else if (strcmp((yyvsp[-1].str_val), "caractereUnico") == 0)
        {
            format_str = " %%c"; // Char (espaço antes de %c)
            fprintf(stderr, "INFO: Entrada de '%s' formatada como char ( %%c).\n", (yyvsp[-1].str_val));
        }
        else
        {
            format_str = "%%d"; // Padrão para int se não reconhecido
            fprintf(stderr, "AVISO: Entrada de dados simplificada para int. Verifique o tipo real em '%s'.\n", (yyvsp[-1].str_val));
        }
        // CORREÇÃO: Adicionando o printf literal antes do scanf e separando-os com '; \n'
        asprintf(&(yyval.str_val), "printf(\"%%s\\n\", \"%s\");\n    scanf(\"%s\", &%s)", // printf para o prompt, depois scanf
                 "Digite um numero inteiro: ", format_str, (yyvsp[-1].str_val)); // O prompt pode vir do .com, isto é um exemplo
        // A string gerada agora é: "printf(\"prompt\\n\");\n    scanf(\"fmt\", &var)"
        
        free((yyvsp[-1].str_val));
    }
#line 1410 "analisador_sintatico.tab.c"
    break;

  case 19: /* saida: HASH_TOKEN ARROW_TOKEN lista_itens_saida_gen_code  */
#line 200 "analisador_sintatico.y"
    {
        // O $3 agora é a string C completa com a formatação e argumentos do printf.
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1420 "analisador_sintatico.tab.c"
    break;

  case 20: /* lista_itens_saida_gen_code: item_saida_gen_code  */
#line 211 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val)); // $1 já é a string C do printf completo para este item.
        free((yyvsp[0].str_val));
    }
#line 1429 "analisador_sintatico.tab.c"
    break;

  case 21: /* lista_itens_saida_gen_code: item_saida_gen_code HASH_HASH lista_itens_saida_gen_code  */
#line 216 "analisador_sintatico.y"
    {
        // CORREÇÃO: Concatena as strings C completas dos printfs.
        // Isso cria uma única string que contém múltiplos "printf(...);"
        asprintf(&(yyval.str_val), "%s%s", (yyvsp[-2].str_val), (yyvsp[0].str_val)); 
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1441 "analisador_sintatico.tab.c"
    break;

  case 22: /* item_saida_gen_code: LBRACKET ID_TOKEN RBRACKET  */
#line 229 "analisador_sintatico.y"
    {
        char *format_str;
        if (strcmp((yyvsp[-1].str_val), "valorInt") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoSoma") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoResto") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoSubtracao") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoMultiplicacao") == 0 ||
            strcmp((yyvsp[-1].str_val), "resultadoDivisao") == 0)
        {
            format_str = "%%d"; // Int
            fprintf(stderr, "INFO: Saída de '%s' formatada como int (%%d).\\n", (yyvsp[-1].str_val));
        }
        else if (strcmp((yyvsp[-1].str_val), "valorReal") == 0)
        {
            format_str = "%%f"; // Float
            fprintf(stderr, "INFO: Saída de '%s' formatada como float (%%f).\\n", (yyvsp[-1].str_val));
        }
        else if (strcmp((yyvsp[-1].str_val), "caractereUnico") == 0)
        {
            format_str = "%%c"; // Char
            fprintf(stderr, "INFO: Saída de '%s' formatada como char (%%c).\\n", (yyvsp[-1].str_val));
        }
        else
        {
            format_str = "%%s"; // Padrão para string (ID) se não reconhecido
            fprintf(stderr, "AVISO: Saída de variável simplificada para string. Verifique o tipo real de '%s'.\\n", (yyvsp[-1].str_val));
        }
        asprintf(&(yyval.str_val), "printf(\"%s\\n\", %s)", format_str, (yyvsp[-1].str_val)); // Gerando printf completo com \n
        free((yyvsp[-1].str_val));
    }
#line 1476 "analisador_sintatico.tab.c"
    break;

  case 23: /* item_saida_gen_code: STRING_LITERAL  */
#line 260 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "printf(\"%%s\\n\", %s)", (yyvsp[0].str_val)); // Gerando printf completo com \n
        free((yyvsp[0].str_val));
    }
#line 1485 "analisador_sintatico.tab.c"
    break;

  case 24: /* item_saida_gen_code: CHAR_LITERAL  */
#line 265 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "printf(\"%%c\\n\", %s)", (yyvsp[0].str_val)); // Gerando printf completo com \n
        free((yyvsp[0].str_val));
    }
#line 1494 "analisador_sintatico.tab.c"
    break;

  case 25: /* item_saida_gen_code: expressao  */
#line 270 "analisador_sintatico.y"
    {
        // Assumindo int como padrão para expressões.
        asprintf(&(yyval.str_val), "printf(\"%%d\\n\", (%s))", (yyvsp[0].str_val)); // Gerando printf completo com \n
        free((yyvsp[0].str_val));
    }
#line 1504 "analisador_sintatico.tab.c"
    break;

  case 26: /* condicional: SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 279 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    if (%s) {\n%s    }\n", (yyvsp[-4].str_val), (yyvsp[-1].str_val));
        free((yyvsp[-4].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1514 "analisador_sintatico.tab.c"
    break;

  case 27: /* condicional: SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN DEMAS_TOKEN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 285 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    if (%s) {\n%s    } else {\n%s    }\n", (yyvsp[-8].str_val), (yyvsp[-5].str_val), (yyvsp[-1].str_val));
        free((yyvsp[-8].str_val));
        free((yyvsp[-5].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1525 "analisador_sintatico.tab.c"
    break;

  case 28: /* cambio_stmt: CAMBIO_TOKEN LPAREN ID_TOKEN RPAREN COMENZAR_TOKEN lista_casos FIN_TOKEN  */
#line 295 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    switch (%s) {\n%s    }\n", (yyvsp[-4].str_val), (yyvsp[-1].str_val));
        free((yyvsp[-4].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1535 "analisador_sintatico.tab.c"
    break;

  case 29: /* lista_casos: caso_stmt  */
#line 304 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1544 "analisador_sintatico.tab.c"
    break;

  case 30: /* lista_casos: caso_stmt lista_casos  */
#line 309 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s%s", (yyvsp[-1].str_val), (yyvsp[0].str_val));
        free((yyvsp[-1].str_val));
        free((yyvsp[0].str_val));
    }
#line 1554 "analisador_sintatico.tab.c"
    break;

  case 31: /* caso_stmt: CASO_TOKEN INT_LITERAL COLON lista_comandos  */
#line 318 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    case %d:\n%s        break;\n", (yyvsp[-2].int_val), (yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1563 "analisador_sintatico.tab.c"
    break;

  case 32: /* caso_stmt: CASO_TOKEN STRING_LITERAL COLON lista_comandos  */
#line 323 "analisador_sintatico.y"
    {
        fprintf(stderr, "AVISO: CASE com STRING literal pode não ser padrão C. Verifique.\n");
        asprintf(&(yyval.str_val), "    case %s:\n%s        break;\n", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1574 "analisador_sintatico.tab.c"
    break;

  case 33: /* caso_stmt: CASO_TOKEN CHAR_LITERAL COLON lista_comandos  */
#line 330 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    case %s:\n%s        break;\n", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1584 "analisador_sintatico.tab.c"
    break;

  case 34: /* caso_stmt: CASO_TOKEN ID_TOKEN COLON lista_comandos  */
#line 336 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    case %s:\n%s        break;\n", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1594 "analisador_sintatico.tab.c"
    break;

  case 35: /* repeticao: MIENTRAS_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 345 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    while (%s) {\n%s    }\n", (yyvsp[-4].str_val), (yyvsp[-1].str_val));
        free((yyvsp[-4].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1604 "analisador_sintatico.tab.c"
    break;

  case 36: /* repeticao_for: PARA_TOKEN atribuicao EXCL_EXCL condicao EXCL_EXCL atribuicao COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 354 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "    for (%s; %s; %s) {\n%s    }\n", (yyvsp[-7].str_val), (yyvsp[-5].str_val), (yyvsp[-3].str_val), (yyvsp[-1].str_val));
        free((yyvsp[-7].str_val));
        free((yyvsp[-5].str_val));
        free((yyvsp[-3].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1616 "analisador_sintatico.tab.c"
    break;

  case 37: /* expressao: ID_TOKEN  */
#line 365 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1625 "analisador_sintatico.tab.c"
    break;

  case 38: /* expressao: CHAR_LITERAL  */
#line 370 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1634 "analisador_sintatico.tab.c"
    break;

  case 39: /* expressao: INT_LITERAL  */
#line 375 "analisador_sintatico.y"
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[0].int_val));
        (yyval.str_val) = strdup(buf);
    }
#line 1644 "analisador_sintatico.tab.c"
    break;

  case 40: /* expressao: FLOAT_LITERAL  */
#line 381 "analisador_sintatico.y"
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%.6g", (yyvsp[0].float_val)); // %.6g para floats sem zeros à direita desnecessários
        (yyval.str_val) = strdup(buf);
    }
#line 1654 "analisador_sintatico.tab.c"
    break;

  case 41: /* expressao: expressao MAS_TOKEN expressao  */
#line 387 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s + %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1664 "analisador_sintatico.tab.c"
    break;

  case 42: /* expressao: expressao MENOS_TOKEN expressao  */
#line 393 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s - %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1674 "analisador_sintatico.tab.c"
    break;

  case 43: /* expressao: expressao POR_TOKEN expressao  */
#line 399 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s * %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1684 "analisador_sintatico.tab.c"
    break;

  case 44: /* expressao: expressao DIVIDIDO_TOKEN expressao  */
#line 405 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s / %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1694 "analisador_sintatico.tab.c"
    break;

  case 45: /* expressao: expressao RESTO_TOKEN expressao  */
#line 411 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s %% %s", (yyvsp[-2].str_val), (yyvsp[0].str_val)); // '%%' para imprimir '%' em C
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1704 "analisador_sintatico.tab.c"
    break;

  case 46: /* expressao: LPAREN expressao RPAREN  */
#line 417 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "(%s)", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1713 "analisador_sintatico.tab.c"
    break;

  case 47: /* condicao: expressao GT_RELATIONAL expressao  */
#line 425 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s > %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1723 "analisador_sintatico.tab.c"
    break;

  case 48: /* condicao: expressao EQ_RELATIONAL expressao  */
#line 431 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s == %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1733 "analisador_sintatico.tab.c"
    break;

  case 49: /* condicao: expressao LT_RELATIONAL expressao  */
#line 437 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s < %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1743 "analisador_sintatico.tab.c"
    break;

  case 50: /* condicao: expressao GE_RELATIONAL expressao  */
#line 443 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s >= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1753 "analisador_sintatico.tab.c"
    break;

  case 51: /* condicao: expressao LE_RELATIONAL expressao  */
#line 449 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s <= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1763 "analisador_sintatico.tab.c"
    break;

  case 52: /* condicao: condicao AND_LOGICAL condicao  */
#line 455 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s && %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1773 "analisador_sintatico.tab.c"
    break;

  case 53: /* condicao: condicao OR_LOGICAL condicao  */
#line 461 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s || %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1783 "analisador_sintatico.tab.c"
    break;

  case 54: /* condicao: NOT_LOGICAL condicao  */
#line 467 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "!%s", (yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1792 "analisador_sintatico.tab.c"
    break;

  case 55: /* condicao: LPAREN condicao RPAREN  */
#line 472 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "(%s)", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1801 "analisador_sintatico.tab.c"
    break;


#line 1805 "analisador_sintatico.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 478 "analisador_sintatico.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, s);
}
