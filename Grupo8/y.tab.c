
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "./Sintactico.y"

#include "./include/cabecera.h"


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WHILE = 258,
     IF = 259,
     ELSE = 260,
     PUT = 261,
     GET = 262,
     DIM = 263,
     AS = 264,
     CONTAR = 265,
     INTEGER = 266,
     FLOAT = 267,
     STRING = 268,
     LLAVE_ABIERTO = 269,
     LLAVE_CERRADO = 270,
     PAR_ABIERTO = 271,
     PAR_CERRADO = 272,
     COR_ABIERTO = 273,
     COR_CERRADO = 274,
     PUNTO_COMA = 275,
     COMA = 276,
     OP_ASIGNACION = 277,
     OP_SUMA = 278,
     OP_RESTA = 279,
     OP_DIVISION = 280,
     OP_MULT = 281,
     OP_LE = 282,
     OP_LEQ = 283,
     OP_GE = 284,
     OP_GEQ = 285,
     OP_NE = 286,
     OP_IGUAL = 287,
     OP_AND = 288,
     OP_OR = 289,
     OP_NOT = 290,
     CONST_ENTERA = 291,
     CONST_REAL = 292,
     CONST_STRING = 293,
     CONST_BINARIA = 294,
     CONST_HEXA = 295,
     ID = 296
   };
#endif
/* Tokens.  */
#define WHILE 258
#define IF 259
#define ELSE 260
#define PUT 261
#define GET 262
#define DIM 263
#define AS 264
#define CONTAR 265
#define INTEGER 266
#define FLOAT 267
#define STRING 268
#define LLAVE_ABIERTO 269
#define LLAVE_CERRADO 270
#define PAR_ABIERTO 271
#define PAR_CERRADO 272
#define COR_ABIERTO 273
#define COR_CERRADO 274
#define PUNTO_COMA 275
#define COMA 276
#define OP_ASIGNACION 277
#define OP_SUMA 278
#define OP_RESTA 279
#define OP_DIVISION 280
#define OP_MULT 281
#define OP_LE 282
#define OP_LEQ 283
#define OP_GE 284
#define OP_GEQ 285
#define OP_NE 286
#define OP_IGUAL 287
#define OP_AND 288
#define OP_OR 289
#define OP_NOT 290
#define CONST_ENTERA 291
#define CONST_REAL 292
#define CONST_STRING 293
#define CONST_BINARIA 294
#define CONST_HEXA 295
#define ID 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 6 "./Sintactico.y"

	char *string;



/* Line 214 of yacc.c  */
#line 202 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    16,    19,    22,
      24,    26,    29,    32,    36,    40,    44,    45,    53,    57,
      61,    63,    67,    71,    73,    77,    81,    83,    85,    87,
      91,    93,    95,    97,    99,   101,   106,   112,   118,   120,
     122,   124,   127,   130,   133,   141,   147,   148,   161,   167,
     175,   179,   180,   185,   188,   190,   194,   195,   200,   202,
     204,   206,   208,   210
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    46,    44,    -1,    44,    -1,    45,    -1,
      44,    45,    -1,    47,    20,    -1,    59,    20,    -1,    60,
      20,    -1,    61,    -1,    62,    -1,    52,    20,    -1,    56,
      20,    -1,    46,    56,    20,    -1,    41,    22,    52,    -1,
      41,    22,    38,    -1,    -1,    10,    16,    52,    49,    20,
      50,    17,    -1,    18,    51,    19,    -1,    51,    21,    55,
      -1,    55,    -1,    52,    23,    53,    -1,    52,    24,    53,
      -1,    53,    -1,    53,    26,    54,    -1,    53,    25,    54,
      -1,    54,    -1,    41,    -1,    55,    -1,    16,    52,    17,
      -1,    48,    -1,    39,    -1,    40,    -1,    37,    -1,    36,
      -1,     8,    27,    57,    29,    -1,    41,    21,    57,    21,
      58,    -1,    41,    29,     9,    27,    58,    -1,    12,    -1,
      11,    -1,    13,    -1,     6,    41,    -1,     6,    38,    -1,
       7,    41,    -1,     3,    16,    64,    17,    14,    44,    15,
      -1,     3,    16,    64,    17,    45,    -1,    -1,     4,    16,
      64,    17,    14,    44,    15,     5,    63,    14,    44,    15,
      -1,     4,    16,    64,    17,    45,    -1,     4,    16,    64,
      17,    14,    44,    15,    -1,    66,    33,    66,    -1,    -1,
      66,    65,    34,    66,    -1,    35,    66,    -1,    66,    -1,
      16,    64,    17,    -1,    -1,    52,    67,    68,    52,    -1,
      32,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    68,    71,    79,    89,    90,    91,    92,
      93,    94,    97,    98,   102,   108,   116,   116,   123,   126,
     135,   147,   163,   179,   196,   211,   226,   241,   251,   260,
     273,   282,   286,   289,   293,   300,   304,   305,   308,   309,
     310,   315,   316,   319,   324,   325,   330,   329,   351,   363,
     377,   383,   383,   400,   407,   419,   423,   423,   432,   433,
     434,   435,   436,   437
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WHILE", "IF", "ELSE", "PUT", "GET",
  "DIM", "AS", "CONTAR", "INTEGER", "FLOAT", "STRING", "LLAVE_ABIERTO",
  "LLAVE_CERRADO", "PAR_ABIERTO", "PAR_CERRADO", "COR_ABIERTO",
  "COR_CERRADO", "PUNTO_COMA", "COMA", "OP_ASIGNACION", "OP_SUMA",
  "OP_RESTA", "OP_DIVISION", "OP_MULT", "OP_LE", "OP_LEQ", "OP_GE",
  "OP_GEQ", "OP_NE", "OP_IGUAL", "OP_AND", "OP_OR", "OP_NOT",
  "CONST_ENTERA", "CONST_REAL", "CONST_STRING", "CONST_BINARIA",
  "CONST_HEXA", "ID", "$accept", "programa", "bloque", "sentencia",
  "listaDeclaraciones", "asignacion", "funcionContar", "$@1",
  "listaConstantes", "constantes", "expresion", "termino", "factor",
  "constante", "declaracion", "lista_declaracion", "tipoDeDato", "salida",
  "entrada", "bloqueWhile", "bloqueIf", "$@2", "condicion", "$@3",
  "expLogica", "$@4", "comparador", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    49,    48,    50,    51,
      51,    52,    52,    52,    53,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    56,    57,    57,    58,    58,
      58,    59,    59,    60,    61,    61,    63,    62,    62,    62,
      64,    65,    64,    64,    64,    66,    67,    66,    68,    68,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     2,     2,     2,     1,
       1,     2,     2,     3,     3,     3,     0,     7,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     4,     5,     5,     1,     1,
       1,     2,     2,     2,     7,     5,     0,    12,     5,     7,
       3,     0,     4,     2,     1,     3,     0,     4,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    34,    33,
      31,    32,    27,     0,     3,     4,     0,     0,    30,     0,
      23,    26,    28,     0,     0,     0,     9,    10,     0,     0,
      42,    41,    43,     0,     0,    27,     0,     0,     1,     5,
       2,     0,     6,    11,     0,     0,     0,     0,    12,     7,
       8,     0,     0,    56,     0,    51,     0,     0,     0,    16,
      29,    15,    14,    13,    21,    22,    25,    24,    56,     0,
      53,     0,     0,     0,     0,     0,     0,     0,    35,     0,
      55,    59,    60,    61,    62,    63,    58,     0,     0,    45,
      50,     0,     0,    48,     0,     0,     0,    57,     0,    52,
       0,     0,     0,     0,     0,    44,    49,    39,    38,    40,
      36,    37,     0,    20,    17,    46,    18,     0,     0,    19,
       0,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    79,   104,   112,
      19,    20,    21,    22,    23,    58,   110,    24,    25,    26,
      27,   118,    54,    74,    55,    71,    87
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -96
static const yytype_int16 yypact[] =
{
       3,    40,    49,    33,   -29,   -11,    64,   192,   -96,   -96,
     -96,   -96,    66,    90,   156,   -96,     3,    74,   -96,    44,
       6,   -96,   -96,    78,    81,    82,   -96,   -96,   164,   164,
     -96,   -96,   -96,    62,   192,   -96,    11,   174,   -96,   -96,
     156,    84,   -96,   -96,   192,   192,   192,   192,   -96,   -96,
     -96,   164,   206,    52,    89,   -13,    91,     0,    80,    52,
     -96,   -96,    52,   -96,     6,     6,   -96,   -96,    11,    93,
     -96,    22,    56,   206,    79,    75,    62,   110,   -96,   102,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   192,   156,   -96,
     -96,   206,   156,   -96,   104,    96,   108,    52,   114,   -96,
     128,    25,    25,   -22,   111,   -96,   122,   -96,   -96,   -96,
     -96,   -96,    36,   -96,   -96,   -96,   -96,   -22,   119,   -96,
     156,   142,   -96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,   -15,   -14,   -96,   -96,   -96,   -96,   -96,   -96,
      -4,     1,    53,   -95,   120,    61,    37,   -96,   -96,   -96,
     -96,   -96,   -24,   -96,   -50,   -96,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const yytype_int8 yytable[] =
{
      39,    40,    70,    36,   -54,    56,     1,     2,   113,     3,
       4,     5,    32,     6,     8,     9,    33,    10,    11,     7,
      73,    76,   119,    90,    53,    53,    39,    69,    60,    77,
      59,    46,    47,    62,    44,    45,   107,   108,   109,     8,
       9,    99,    10,    11,    12,    64,    65,    68,    53,    81,
      82,    83,    84,    85,    86,   116,    28,   117,    89,     1,
       2,    93,     3,     4,    43,    29,     6,    44,    45,    53,
      88,    30,     7,    98,    31,    44,    45,   100,     1,     2,
      34,     3,     4,    97,    39,     6,    39,    53,    37,    92,
      38,     7,     8,     9,    42,    10,    11,    12,    48,    66,
      67,    49,    50,    57,    63,   121,    72,    39,    75,    78,
      80,     8,     9,    91,    10,    11,    12,     1,     2,    95,
       3,     4,    96,   102,     6,   101,   103,   115,   114,   105,
       7,     1,     2,   120,     3,     4,    41,    94,     6,   111,
       0,     0,     0,   106,     7,     1,     2,     0,     3,     4,
       8,     9,     6,    10,    11,    12,     0,   122,     7,     1,
       2,     0,     3,     4,     8,     9,     6,    10,    11,    12,
       0,     0,     7,     0,     6,     0,     0,     0,     8,     9,
      51,    10,    11,    12,     6,     0,     0,     0,     0,     0,
       7,     0,     8,     9,     0,    10,    11,    12,     0,    52,
       8,     9,     6,    10,    11,    35,     0,     0,     7,     0,
       8,     9,    61,    10,    11,    35,     6,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     8,     9,
       0,    10,    11,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,    10,    11,    35
};

static const yytype_int8 yycheck[] =
{
      14,    16,    52,     7,    17,    29,     3,     4,   103,     6,
       7,     8,    41,    10,    36,    37,    27,    39,    40,    16,
      33,    21,   117,    73,    28,    29,    40,    51,    17,    29,
      34,    25,    26,    37,    23,    24,    11,    12,    13,    36,
      37,    91,    39,    40,    41,    44,    45,    51,    52,    27,
      28,    29,    30,    31,    32,    19,    16,    21,    72,     3,
       4,    75,     6,     7,    20,    16,    10,    23,    24,    73,
      14,    38,    16,    88,    41,    23,    24,    92,     3,     4,
      16,     6,     7,    87,    98,    10,   100,    91,    22,    14,
       0,    16,    36,    37,    20,    39,    40,    41,    20,    46,
      47,    20,    20,    41,    20,   120,    17,   121,    17,    29,
      17,    36,    37,    34,    39,    40,    41,     3,     4,     9,
       6,     7,    20,    27,    10,    21,    18,     5,    17,    15,
      16,     3,     4,    14,     6,     7,    16,    76,    10,   102,
      -1,    -1,    -1,    15,    16,     3,     4,    -1,     6,     7,
      36,    37,    10,    39,    40,    41,    -1,    15,    16,     3,
       4,    -1,     6,     7,    36,    37,    10,    39,    40,    41,
      -1,    -1,    16,    -1,    10,    -1,    -1,    -1,    36,    37,
      16,    39,    40,    41,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    36,    37,    -1,    39,    40,    41,    -1,    35,
      36,    37,    10,    39,    40,    41,    -1,    -1,    16,    -1,
      36,    37,    38,    39,    40,    41,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    10,    16,    36,    37,
      39,    40,    41,    43,    44,    45,    46,    47,    48,    52,
      53,    54,    55,    56,    59,    60,    61,    62,    16,    16,
      38,    41,    41,    27,    16,    41,    52,    22,     0,    45,
      44,    56,    20,    20,    23,    24,    25,    26,    20,    20,
      20,    16,    35,    52,    64,    66,    64,    41,    57,    52,
      17,    38,    52,    20,    53,    53,    54,    54,    52,    64,
      66,    67,    17,    33,    65,    17,    21,    29,    29,    49,
      17,    27,    28,    29,    30,    31,    32,    68,    14,    45,
      66,    34,    14,    45,    57,     9,    20,    52,    44,    66,
      44,    21,    27,    18,    50,    15,    15,    11,    12,    13,
      58,    58,    51,    55,    17,     5,    19,    21,    63,    55,
      14,    44,    15
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 67 "./Sintactico.y"
    {puts("COMPILACION EXITOSA!");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "./Sintactico.y"
    {puts("COMPILACION EXITOSA!");}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "./Sintactico.y"
    {
	bloque_indice = sentencia_indice;
	
	// Cada vez que termina una sentencia reinicio los contadores para que no interfieran con la sentencia siguiente
	contador_e = 0; contador_t = 0, recuperar_puntero = 0;
}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 80 "./Sintactico.y"
    {
	bloque_indice = sentencia_indice;
	//bloque_indice = crear_terceto(SIGNO_SEPARACION_SENTENCIAS, transformar_indice(bloque_indice), transformar_indice(sentencia_indice), &numeracion_terceto, &lista_tercetos);
	
	// Cada vez que termina una sentencia reinicio los contadores para que no interfieran con la sentencia siguiente
	contador_e = 0; contador_t = 0, recuperar_puntero = 0;
}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 89 "./Sintactico.y"
    {sentencia_indice = asignacion_indice;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 90 "./Sintactico.y"
    {sentencia_indice = put_indice;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 91 "./Sintactico.y"
    {sentencia_indice = get_indice;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 93 "./Sintactico.y"
    {sentencia_indice = if_indice;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 94 "./Sintactico.y"
    {sentencia_indice = expresion_indice;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 103 "./Sintactico.y"
    {
	verirficar_tipos_compatibles(&tabla_simbolos, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno); 
	asignacion_indice = crear_terceto(SIGNO_IGUAL, (yyvsp[(1) - (3)].string),transformar_indice(expresion_indice), &numeracion_terceto, &lista_tercetos);
}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 109 "./Sintactico.y"
    {
	verirficar_tipos_compatibles(&tabla_simbolos, (yyvsp[(1) - (3)].string), LEXICO_TIPO_STRING, yylineno);
	asignacion_indice = crear_terceto(SIGNO_IGUAL, (yyvsp[(1) - (3)].string),buscar_valor(&tabla_simbolos, (yyvsp[(3) - (3)].string)), &numeracion_terceto, &lista_tercetos);
}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 116 "./Sintactico.y"
    {crear_terceto(SIGNO_IGUAL, VARIABLE_AUX, transformar_indice(expresion_indice), &numeracion_terceto, &lista_tercetos);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 117 "./Sintactico.y"
    {
	(yyval.string) = LEXICO_TIPO_INTEGER; 
	contar_indice = crear_terceto(VARIABLE_CANT, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 127 "./Sintactico.y"
    {

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, &lista_tercetos);
	crear_terceto(BNE, transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, &lista_tercetos);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, &lista_tercetos);
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 136 "./Sintactico.y"
    {
	crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, INI_VARIABLE_CANT, &numeracion_terceto, &lista_tercetos);

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, &lista_tercetos);
	crear_terceto(BNE,transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, &lista_tercetos);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, &lista_tercetos);
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 148 "./Sintactico.y"
    {
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_SUMAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, &lista_tercetos);

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 164 "./Sintactico.y"
    {	
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_RESTAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, &lista_tercetos); 

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 180 "./Sintactico.y"
    {	
	contador_t = 0;
	contador_e++;
	if(contador_e > 1)	
	{
		printf("%d\n", expresion_indice);
		apilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 1;
	}
	expresion_indice = termino_indice;

	// Para verificacion de tipos
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 197 "./Sintactico.y"
    {	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_MULT, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, &lista_tercetos); 

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 212 "./Sintactico.y"
    {	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_DIVISION, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, &lista_tercetos);

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 227 "./Sintactico.y"
    {	
	contador_t++;
	if(contador_t > 1)
	{
		apilar(&pila_termino, &termino_indice);
		recuperar_puntero = 1;
	}
	termino_indice = factor_indice;

	// Para verificacion de tipos	
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 242 "./Sintactico.y"
    {	
	es_nuevo_token = 1;
	factor_indice = crear_terceto((yyvsp[(1) - (1)].string), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);

	// Para verificacion de tipos
	verficiar_declaracion(&tabla_simbolos, (yyvsp[(1) - (1)].string), yylineno);
	(yyval.string) = strdup(buscar_tipo(&tabla_simbolos, (yyvsp[(1) - (1)].string)));
}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 252 "./Sintactico.y"
    {	
	es_nuevo_token = 1;
	factor_indice = constante_indice; 

	// Para verificacion de tipos
	(yyval.string) = strdup(buscar_tipo(&tabla_simbolos, (yyvsp[(1) - (1)].string)));
}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 261 "./Sintactico.y"
    {	
	contador_e = 0;
	factor_indice = expresion_indice;	
	if(es_nuevo_token == 0)
	{
		recuperar_puntero = 1;
	}
	
	// Para verificacion de tipos
	(yyval.string) = (yyvsp[(2) - (3)].string);
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 274 "./Sintactico.y"
    {
	factor_indice = contar_indice;

	// Para verificacion de tipos
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 282 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 286 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 289 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 293 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 300 "./Sintactico.y"
    {completar_tipos(&tabla_simbolos, matriz_id, matriz_tipo, &contador_elementos);
																finalizar_semantica(matriz_id, matriz_tipo, &contador_elementos);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 304 "./Sintactico.y"
    {anadir_elementos(matriz_id, matriz_tipo, (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string), &contador_elementos);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 305 "./Sintactico.y"
    {anadir_elementos(matriz_id, matriz_tipo, (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string), &contador_elementos);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 315 "./Sintactico.y"
    {put_indice = crear_terceto(SALIDA, (yyvsp[(2) - (2)].string), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 316 "./Sintactico.y"
    {put_indice = crear_terceto(SALIDA, buscar_valor(&tabla_simbolos, (yyvsp[(2) - (2)].string)), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 319 "./Sintactico.y"
    {get_indice = crear_terceto(ENTRADA, (yyvsp[(2) - (2)].string), SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 324 "./Sintactico.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 325 "./Sintactico.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 330 "./Sintactico.y"
    {
	int auxiliar, cantidad_desapilar, i;
	desapilar(&pila_cantidad_desapilar, &cantidad_desapilar);
	for(i = 0; i < cantidad_desapilar; i++)
	{
		desapilar(&pila_condicion, &auxiliar);
		cambiar_elemento(&lista_tercetos, auxiliar, transformar_indice(sentencia_indice + 2), 2);	
	}

	auxiliar = crear_terceto(BI, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	apilar(&pila_condicion, &auxiliar);

}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 343 "./Sintactico.y"
    {
	
	int auxiliar;
	desapilar(&pila_condicion, &auxiliar);
	cambiar_elemento(&lista_tercetos, auxiliar, transformar_indice(bloque_indice + 1), 2);
	if_indice = bloque_indice;
}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 352 "./Sintactico.y"
    {
	int auxiliar, cantidad_desapilar, i;
	desapilar(&pila_cantidad_desapilar, &cantidad_desapilar);
	for(i = 0; i < cantidad_desapilar; i++)
	{
		desapilar(&pila_condicion, &auxiliar);
		cambiar_elemento(&lista_tercetos, auxiliar, transformar_indice(sentencia_indice + 1), 2);	
	}
	if_indice = sentencia_indice;
}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 364 "./Sintactico.y"
    {
	int auxiliar, cantidad_desapilar, i;
	desapilar(&pila_cantidad_desapilar, &cantidad_desapilar);
	for(i = 0; i < cantidad_desapilar; i++)
	{
		desapilar(&pila_condicion, &auxiliar);
		cambiar_elemento(&lista_tercetos, auxiliar, transformar_indice(sentencia_indice + 1), 2);	
	}
	if_indice = bloque_indice;
}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 378 "./Sintactico.y"
    {
	int cant_saltos = 2; 
	apilar(&pila_cantidad_desapilar, &cant_saltos);
}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 383 "./Sintactico.y"
    {invertir_branch(&lista_tercetos, exp_logica_indice);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 384 "./Sintactico.y"
    {
	
	int cant_saltos = 1, indice_segunda_condicion, indice_primera_condicion;
	
	// Desapilor 2 veces porque me interesa la primera condicion
	desapilar(&pila_condicion, &indice_segunda_condicion);
	desapilar(&pila_condicion, &indice_primera_condicion);
	// Apilo la segunda condición
	apilar(&pila_condicion, &indice_segunda_condicion);
	// Cambio el terceto de la primera condición para que el branch apunte al siguiente del terceto actual
	cambiar_elemento(&lista_tercetos, indice_primera_condicion, transformar_indice(exp_logica_indice + 1), 2);	
	apilar(&pila_cantidad_desapilar, &cant_saltos);

	
}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 401 "./Sintactico.y"
    {
	int cant_saltos = 1; 
	invertir_branch(&lista_tercetos, exp_logica_indice); 
	apilar(&pila_cantidad_desapilar, &cant_saltos);
}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 408 "./Sintactico.y"
    {
	int cant_saltos = 1; 
	apilar(&pila_cantidad_desapilar, &cant_saltos);

	//Ver que pasa 
	contador_e = 0;
	contador_t = 0;
	recuperar_puntero = 0;
}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 419 "./Sintactico.y"
    {
	exp_logica_indice = condicion_indice;
}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 423 "./Sintactico.y"
    {auxiliar_indice = expresion_indice;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 424 "./Sintactico.y"
    {
	
	crear_terceto(CMP, transformar_indice(auxiliar_indice), transformar_indice(expresion_indice), &numeracion_terceto, &lista_tercetos);
	exp_logica_indice = crear_terceto(obtener_branch(operador_comparacion), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, &lista_tercetos);
	apilar(&pila_condicion, &exp_logica_indice);
}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 432 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 433 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 434 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 435 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 436 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 437 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;



/* Line 1455 of yacc.c  */
#line 2144 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 440 "./Sintactico.y"


int main(int argc, char *argv[]) 
{
	
	yyin = fopen(argv[1], TEXTO_LECTURA);
	if(yyin == NULL)
	{	
		printf("No se pudo abrir el archivo %s\n", argv[1]);
		return ERROR;
	}
	
	crear_pila(&pila_cantidad_desapilar);



	iniciar_lexico(&tabla_simbolos);
	iniciar_semantica(&contador_elementos);
	iniciar_gci(&lista_tercetos, &pila_condicion, &pila_termino, &pila_expresion, &contador_t, &contador_e, &es_nuevo_token, &recuperar_puntero, &numeracion_terceto);
	
	yyparse();

	finalizar_lexico(&tabla_simbolos, PATH_ARCHIVO_TS);
	finalizar_gci(&lista_tercetos, &pila_condicion, &pila_termino, &pila_expresion, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	fclose(yyin);


	vaciar_pila(&pila_cantidad_desapilar);

	return TODO_BIEN;
}

int yyerror(void)
{
	puts("******************************************");
	puts("ERROR SINTACTICO");
    printf("Linea nro %d\n", yylineno);
	puts("******************************************");
	exit (ERROR);
}
