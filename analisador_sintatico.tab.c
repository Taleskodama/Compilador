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

extern int yylex();
extern int yylineno; // Suporte para yylineno do lexer
void yyerror(const char *s);

// Arquivos auxiliares
FILE *output_code_file;
extern FILE *yyout_tokens;

#line 85 "analisador_sintatico.tab.c"

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
  YYSYMBOL_LBLOCK_DELIMITER = 29,          /* LBLOCK_DELIMITER  */
  YYSYMBOL_RBLOCK_DELIMITER = 30,          /* RBLOCK_DELIMITER  */
  YYSYMBOL_LPAREN = 31,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 32,                    /* RPAREN  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_GT_RELATIONAL = 34,             /* GT_RELATIONAL  */
  YYSYMBOL_LT_RELATIONAL = 35,             /* LT_RELATIONAL  */
  YYSYMBOL_GE_RELATIONAL = 36,             /* GE_RELATIONAL  */
  YYSYMBOL_LE_RELATIONAL = 37,             /* LE_RELATIONAL  */
  YYSYMBOL_AND_LOGICAL = 38,               /* AND_LOGICAL  */
  YYSYMBOL_OR_LOGICAL = 39,                /* OR_LOGICAL  */
  YYSYMBOL_NOT_LOGICAL = 40,               /* NOT_LOGICAL  */
  YYSYMBOL_ID_TOKEN = 41,                  /* ID_TOKEN  */
  YYSYMBOL_STRING_LITERAL = 42,            /* STRING_LITERAL  */
  YYSYMBOL_INT_LITERAL = 43,               /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 44,             /* FLOAT_LITERAL  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_programa = 46,                  /* programa  */
  YYSYMBOL_lista_comandos = 47,            /* lista_comandos  */
  YYSYMBOL_comando = 48,                   /* comando  */
  YYSYMBOL_atribuicao = 49,                /* atribuicao  */
  YYSYMBOL_entrada = 50,                   /* entrada  */
  YYSYMBOL_saida = 51,                     /* saida  */
  YYSYMBOL_condicional = 52,               /* condicional  */
  YYSYMBOL_cambio_stmt = 53,               /* cambio_stmt  */
  YYSYMBOL_lista_casos = 54,               /* lista_casos  */
  YYSYMBOL_caso_stmt = 55,                 /* caso_stmt  */
  YYSYMBOL_repeticao = 56,                 /* repeticao  */
  YYSYMBOL_repeticao_for = 57,             /* repeticao_for  */
  YYSYMBOL_expressao = 58,                 /* expressao  */
  YYSYMBOL_condicao = 59                   /* condicao  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

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
       0,    52,    52,    59,    60,    64,    65,    66,    67,    68,
      69,    70,    74,    83,    88,    96,   101,   109,   114,   122,
     130,   131,   135,   139,   144,   152,   160,   167,   172,   178,
     184,   190,   196,   202,   208,   214,   221,   227,   233,   239,
     245,   251,   257,   262
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
  "EXCL_EXCL", "SEMI_SEMI", "LBLOCK_DELIMITER", "RBLOCK_DELIMITER",
  "LPAREN", "RPAREN", "COLON", "GT_RELATIONAL", "LT_RELATIONAL",
  "GE_RELATIONAL", "LE_RELATIONAL", "AND_LOGICAL", "OR_LOGICAL",
  "NOT_LOGICAL", "ID_TOKEN", "STRING_LITERAL", "INT_LITERAL",
  "FLOAT_LITERAL", "$accept", "programa", "lista_comandos", "comando",
  "atribuicao", "entrada", "saida", "condicional", "cambio_stmt",
  "lista_casos", "caso_stmt", "repeticao", "repeticao_for", "expressao",
  "condicao", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,     9,     8,   -31,   -20,   -13,   -10,   -16,   -11,    15,
      13,    25,     9,    22,    41,    52,   -32,   -32,   -32,   -32,
     -32,    54,     4,    46,     4,    61,    69,   -15,    -7,   -32,
     -32,   -32,   -32,   -32,   -32,     4,     4,   -32,   -32,   -32,
      62,    28,    71,    68,     4,   -32,    53,   -32,    -7,    98,
      49,    70,   -32,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    84,     4,     4,    87,    88,     1,    93,    -9,
     -32,   -32,    56,    56,   -32,   -32,   -32,    98,    98,    98,
      98,     9,   -32,    81,   111,     9,   -16,   -32,   103,    74,
     104,   111,   105,   107,   118,    94,    95,    96,   -32,   -32,
     -32,     9,   109,     9,     9,     9,   112,     9,   -32,   -32,
     -32,   -32,   113,   -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     8,    11,     9,    10,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       4,     5,     6,     7,    13,     0,     0,    27,    28,    29,
       0,     0,     0,     0,     0,    14,     0,    16,     0,    12,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    43,    30,    31,    32,    33,    34,    36,    37,    38,
      39,     0,    40,    41,     0,     0,     0,    15,     0,     0,
       0,    20,     0,     0,    17,     0,     0,     0,    19,    21,
      25,     0,     0,     0,     0,     0,     0,     0,    24,    23,
      22,    26,     0,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -12,   -32,    -6,   -32,   -32,   -32,   -32,    42,
     -32,   -32,   -32,    -2,   -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    11,    12,    13,    14,    15,    16,    17,    90,
      91,    18,    19,    40,    41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      30,    25,    43,    53,    54,    55,    56,    57,    20,    46,
      21,    22,     3,    51,    52,     4,     1,     5,    23,     6,
       7,    24,    67,    70,    48,    10,    49,    47,    86,     8,
      26,     9,    28,    50,    37,    35,    38,    39,    27,    63,
      64,    82,    83,    29,    36,    37,    69,    38,    39,    31,
      10,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      62,    53,    54,    55,    56,    57,    63,    64,    32,    88,
      55,    56,    57,    92,    53,    54,    55,    56,    57,    33,
      93,    70,    34,    58,    59,    60,    61,    42,    44,   106,
      45,   108,   109,   110,    68,   112,    58,    59,    60,    61,
      66,    81,    71,    65,    84,    85,    63,    64,    63,    64,
      53,    54,    55,    56,    57,    95,    96,    97,    87,    63,
      89,    94,    98,   100,   101,   102,   107,   103,   104,   105,
     111,   113,     0,    99
};

static const yytype_int8 yycheck[] =
{
      12,     7,    24,    12,    13,    14,    15,    16,     0,    24,
      41,    31,     3,    35,    36,     6,    17,     8,    31,    10,
      11,    31,    44,    32,    31,    41,    28,    42,    27,    20,
      41,    22,    19,    35,    41,    31,    43,    44,    23,    38,
      39,    63,    64,    18,    40,    41,    48,    43,    44,    27,
      41,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      32,    12,    13,    14,    15,    16,    38,    39,    27,    81,
      14,    15,    16,    85,    12,    13,    14,    15,    16,    27,
      86,    32,    28,    34,    35,    36,    37,    41,    27,   101,
      21,   103,   104,   105,    41,   107,    34,    35,    36,    37,
      32,    17,    32,    32,    17,    17,    38,    39,    38,    39,
      12,    13,    14,    15,    16,    41,    42,    43,    25,    38,
       9,    18,    18,    18,    17,     7,    17,    33,    33,    33,
      18,    18,    -1,    91
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    46,     3,     6,     8,    10,    11,    20,    22,
      41,    47,    48,    49,    50,    51,    52,    53,    56,    57,
       0,    41,    31,    31,    31,    49,    41,    23,    19,    18,
      47,    27,    27,    27,    28,    31,    40,    41,    43,    44,
      58,    59,    41,    59,    27,    21,    24,    42,    31,    58,
      58,    59,    59,    12,    13,    14,    15,    16,    34,    35,
      36,    37,    32,    38,    39,    32,    32,    59,    41,    58,
      32,    32,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    17,    59,    59,    17,    17,    27,    25,    47,     9,
      54,    55,    47,    49,    18,    41,    42,    43,    18,    54,
      18,    17,     7,    33,    33,    33,    47,    17,    47,    47,
      47,    18,    47,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      54,    54,    55,    55,    55,    56,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     3,     3,     3,     5,     3,     7,    11,     7,
       1,     2,     4,     4,     4,     7,     9,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3
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
#line 53 "analisador_sintatico.y"
    {
        printf("Análise sintática concluída com sucesso.\n");
    }
#line 1208 "analisador_sintatico.tab.c"
    break;

  case 12: /* atribuicao: ID_TOKEN ATRIB_TOKEN expressao  */
#line 75 "analisador_sintatico.y"
    {
        printf("Atribuição: %s := %s\n", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1218 "analisador_sintatico.tab.c"
    break;

  case 13: /* entrada: ENT_TOKEN ID_TOKEN SEMI_SEMI  */
#line 84 "analisador_sintatico.y"
    {
        printf("Entrada declarada para variável: %s\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1227 "analisador_sintatico.tab.c"
    break;

  case 14: /* entrada: AMPERSAND_TOKEN ID_TOKEN LE_INPUT_TOKEN  */
#line 89 "analisador_sintatico.y"
    {
        printf("Entrada para variável: %s\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1236 "analisador_sintatico.tab.c"
    break;

  case 15: /* saida: HASH_TOKEN ARROW_TOKEN LBRACKET ID_TOKEN RBRACKET  */
#line 97 "analisador_sintatico.y"
    {
        printf("Saída de variável: %s\n", (yyvsp[-1].str_val));
        free((yyvsp[-1].str_val));
    }
#line 1245 "analisador_sintatico.tab.c"
    break;

  case 16: /* saida: HASH_TOKEN ARROW_TOKEN STRING_LITERAL  */
#line 102 "analisador_sintatico.y"
    {
        printf("Saída de string: %s\n", (yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1254 "analisador_sintatico.tab.c"
    break;

  case 17: /* condicional: SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 110 "analisador_sintatico.y"
    {
        printf("Condicional IF: %s\n", (yyvsp[-4].str_val));
        free((yyvsp[-4].str_val));
    }
#line 1263 "analisador_sintatico.tab.c"
    break;

  case 18: /* condicional: SI_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN DEMAS_TOKEN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 115 "analisador_sintatico.y"
    {
        printf("Condicional IF-ELSE: %s\n", (yyvsp[-8].str_val));
        free((yyvsp[-8].str_val));
    }
#line 1272 "analisador_sintatico.tab.c"
    break;

  case 19: /* cambio_stmt: CAMBIO_TOKEN LPAREN ID_TOKEN RPAREN COMENZAR_TOKEN lista_casos FIN_TOKEN  */
#line 123 "analisador_sintatico.y"
    {
        printf("Switch com variável: %s\n", (yyvsp[-4].str_val));
        free((yyvsp[-4].str_val));
    }
#line 1281 "analisador_sintatico.tab.c"
    break;

  case 22: /* caso_stmt: CASO_TOKEN INT_LITERAL COLON lista_comandos  */
#line 136 "analisador_sintatico.y"
    {
        printf("CASE com INT: %d\n", (yyvsp[-2].int_val));
    }
#line 1289 "analisador_sintatico.tab.c"
    break;

  case 23: /* caso_stmt: CASO_TOKEN STRING_LITERAL COLON lista_comandos  */
#line 140 "analisador_sintatico.y"
    {
        printf("CASE com STRING: %s\n", (yyvsp[-2].str_val));
        free((yyvsp[-2].str_val));
    }
#line 1298 "analisador_sintatico.tab.c"
    break;

  case 24: /* caso_stmt: CASO_TOKEN ID_TOKEN COLON lista_comandos  */
#line 145 "analisador_sintatico.y"
    {
        printf("CASE com ID: %s\n", (yyvsp[-2].str_val));
        free((yyvsp[-2].str_val));
    }
#line 1307 "analisador_sintatico.tab.c"
    break;

  case 25: /* repeticao: MIENTRAS_TOKEN LPAREN condicao RPAREN COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 153 "analisador_sintatico.y"
    {
        printf("While com condição: %s\n", (yyvsp[-4].str_val));
        free((yyvsp[-4].str_val));
    }
#line 1316 "analisador_sintatico.tab.c"
    break;

  case 26: /* repeticao_for: PARA_TOKEN atribuicao EXCL_EXCL condicao EXCL_EXCL atribuicao COMENZAR_TOKEN lista_comandos FIN_TOKEN  */
#line 161 "analisador_sintatico.y"
    {
        printf("Bloco FOR analisado.\n");
    }
#line 1324 "analisador_sintatico.tab.c"
    break;

  case 27: /* expressao: ID_TOKEN  */
#line 168 "analisador_sintatico.y"
    {
        (yyval.str_val) = strdup((yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1333 "analisador_sintatico.tab.c"
    break;

  case 28: /* expressao: INT_LITERAL  */
#line 173 "analisador_sintatico.y"
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%d", (yyvsp[0].int_val));
        (yyval.str_val) = strdup(buf);
    }
#line 1343 "analisador_sintatico.tab.c"
    break;

  case 29: /* expressao: FLOAT_LITERAL  */
#line 179 "analisador_sintatico.y"
    {
        char buf[32];
        snprintf(buf, sizeof(buf), "%.6g", (yyvsp[0].float_val));
        (yyval.str_val) = strdup(buf);
    }
#line 1353 "analisador_sintatico.tab.c"
    break;

  case 30: /* expressao: expressao MAS_TOKEN expressao  */
#line 185 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s + %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1363 "analisador_sintatico.tab.c"
    break;

  case 31: /* expressao: expressao MENOS_TOKEN expressao  */
#line 191 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s - %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1373 "analisador_sintatico.tab.c"
    break;

  case 32: /* expressao: expressao POR_TOKEN expressao  */
#line 197 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s * %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1383 "analisador_sintatico.tab.c"
    break;

  case 33: /* expressao: expressao DIVIDIDO_TOKEN expressao  */
#line 203 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s / %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1393 "analisador_sintatico.tab.c"
    break;

  case 34: /* expressao: expressao RESTO_TOKEN expressao  */
#line 209 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s %% %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1403 "analisador_sintatico.tab.c"
    break;

  case 35: /* expressao: LPAREN expressao RPAREN  */
#line 215 "analisador_sintatico.y"
    {
        (yyval.str_val) = (yyvsp[-1].str_val);
    }
#line 1411 "analisador_sintatico.tab.c"
    break;

  case 36: /* condicao: expressao GT_RELATIONAL expressao  */
#line 222 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s > %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1421 "analisador_sintatico.tab.c"
    break;

  case 37: /* condicao: expressao LT_RELATIONAL expressao  */
#line 228 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s < %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1431 "analisador_sintatico.tab.c"
    break;

  case 38: /* condicao: expressao GE_RELATIONAL expressao  */
#line 234 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s >= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1441 "analisador_sintatico.tab.c"
    break;

  case 39: /* condicao: expressao LE_RELATIONAL expressao  */
#line 240 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s <= %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1451 "analisador_sintatico.tab.c"
    break;

  case 40: /* condicao: condicao AND_LOGICAL condicao  */
#line 246 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s && %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1461 "analisador_sintatico.tab.c"
    break;

  case 41: /* condicao: condicao OR_LOGICAL condicao  */
#line 252 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "%s || %s", (yyvsp[-2].str_val), (yyvsp[0].str_val));
        free((yyvsp[-2].str_val));
        free((yyvsp[0].str_val));
    }
#line 1471 "analisador_sintatico.tab.c"
    break;

  case 42: /* condicao: NOT_LOGICAL condicao  */
#line 258 "analisador_sintatico.y"
    {
        asprintf(&(yyval.str_val), "!%s", (yyvsp[0].str_val));
        free((yyvsp[0].str_val));
    }
#line 1480 "analisador_sintatico.tab.c"
    break;

  case 43: /* condicao: LPAREN condicao RPAREN  */
#line 263 "analisador_sintatico.y"
    {
        (yyval.str_val) = (yyvsp[-1].str_val);
    }
#line 1488 "analisador_sintatico.tab.c"
    break;


#line 1492 "analisador_sintatico.tab.c"

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

#line 268 "analisador_sintatico.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático na linha %d: %s\n", yylineno, s);
}
