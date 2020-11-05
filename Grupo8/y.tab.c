
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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  119

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
       0,     0,     3,     5,     8,    10,    13,    16,    19,    22,
      24,    26,    29,    33,    37,    38,    46,    50,    54,    56,
      60,    64,    66,    70,    74,    76,    78,    80,    84,    86,
      88,    90,    92,    94,    99,   105,   111,   113,   115,   117,
     120,   123,   126,   134,   140,   141,   154,   160,   168,   172,
     173,   178,   181,   183,   187,   188,   193,   195,   197,   199,
     201,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    44,    45,    -1,    45,    -1,
      46,    20,    -1,    55,    20,    -1,    58,    20,    -1,    59,
      20,    -1,    60,    -1,    61,    -1,    51,    20,    -1,    41,
      22,    51,    -1,    41,    22,    38,    -1,    -1,    10,    16,
      51,    48,    20,    49,    17,    -1,    18,    50,    19,    -1,
      50,    21,    54,    -1,    54,    -1,    51,    23,    52,    -1,
      51,    24,    52,    -1,    52,    -1,    52,    26,    53,    -1,
      52,    25,    53,    -1,    53,    -1,    41,    -1,    54,    -1,
      16,    51,    17,    -1,    47,    -1,    39,    -1,    40,    -1,
      37,    -1,    36,    -1,     8,    27,    56,    29,    -1,    41,
      21,    56,    21,    57,    -1,    41,    29,     9,    27,    57,
      -1,    12,    -1,    11,    -1,    13,    -1,     6,    41,    -1,
       6,    38,    -1,     7,    41,    -1,     3,    16,    63,    17,
      14,    44,    15,    -1,     3,    16,    63,    17,    45,    -1,
      -1,     4,    16,    63,    17,    14,    44,    15,     5,    62,
      14,    44,    15,    -1,     4,    16,    63,    17,    45,    -1,
       4,    16,    63,    17,    14,    44,    15,    -1,    65,    33,
      65,    -1,    -1,    65,    64,    34,    65,    -1,    35,    65,
      -1,    65,    -1,    16,    63,    17,    -1,    -1,    51,    66,
      67,    51,    -1,    32,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    67,    68,    71,    72,    73,    74,    75,
      76,    77,    81,    86,    93,    93,    99,   102,   110,   121,
     137,   153,   169,   184,   199,   214,   224,   233,   246,   255,
     259,   262,   266,   273,   277,   278,   281,   282,   283,   288,
     289,   292,   297,   298,   301,   301,   302,   303,   306,   307,
     307,   308,   309,   312,   313,   313,   323,   324,   325,   326,
     327,   328
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
  "asignacion", "funcionContar", "$@1", "listaConstantes", "constantes",
  "expresion", "termino", "factor", "constante", "declaracion",
  "lista_declaracion", "tipoDeDato", "salida", "entrada", "bloqueWhile",
  "bloqueIf", "$@2", "condicion", "$@3", "expLogica", "$@4", "comparador", 0
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
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    48,    47,    49,    50,    50,    51,
      51,    51,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    54,    54,    55,    56,    56,    57,    57,    57,    58,
      58,    59,    60,    60,    62,    61,    61,    61,    63,    64,
      63,    63,    63,    65,    66,    65,    67,    67,    67,    67,
      67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     2,     3,     3,     0,     7,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     4,     5,     5,     1,     1,     1,     2,
       2,     2,     7,     5,     0,    12,     5,     7,     3,     0,
       4,     2,     1,     3,     0,     4,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    32,    31,
      29,    30,    25,     0,     2,     4,     0,    28,     0,    21,
      24,    26,     0,     0,     0,     9,    10,     0,     0,    40,
      39,    41,     0,     0,    25,     0,     0,     1,     3,     5,
      11,     0,     0,     0,     0,     6,     7,     8,     0,     0,
      54,     0,    49,     0,     0,     0,    14,    27,    13,    12,
      19,    20,    23,    22,    54,     0,    51,     0,     0,     0,
       0,     0,     0,     0,    33,     0,    53,    57,    58,    59,
      60,    61,    56,     0,     0,    43,    48,     0,     0,    46,
       0,     0,     0,    55,     0,    50,     0,     0,     0,     0,
       0,    42,    47,    37,    36,    38,    34,    35,     0,    18,
      15,    44,    16,     0,     0,    17,     0,     0,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    75,   100,   108,    18,
      19,    20,    21,    22,    55,   106,    23,    24,    25,    26,
     114,    51,    70,    52,    67,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
     160,    -2,    18,   -21,    -4,    34,    29,   178,   -89,   -89,
     -89,   -89,    42,    51,   160,   -89,    53,   -89,     9,    44,
     -89,   -89,    70,    82,    86,   -89,   -89,   143,   143,   -89,
     -89,   -89,    38,   178,   -89,    24,   171,   -89,   -89,   -89,
     -89,   178,   178,   178,   178,   -89,   -89,   -89,   143,   188,
      -5,    95,    -7,    99,     2,    91,    -5,   -89,   -89,    -5,
      44,    44,   -89,   -89,    24,   104,   -89,    67,    -1,   188,
      92,    52,    38,   123,   -89,   110,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   178,   160,   -89,   -89,   188,   160,   -89,
     112,   108,   116,    -5,    68,   -89,   107,    74,    74,    13,
     122,   -89,   133,   -89,   -89,   -89,   -89,   -89,    46,   -89,
     -89,   -89,   -89,    13,   126,   -89,   160,   121,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   -72,   -14,   -89,   -89,   -89,   -89,   -89,    -6,
      59,    75,   -88,   -89,    69,    47,   -89,   -89,   -89,   -89,
     -89,   -24,   -89,   -41,   -89,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -53
static const yytype_int8 yytable[] =
{
      38,    35,     1,     2,    53,     3,     4,     5,    66,     6,
     -52,   109,    94,    84,    27,     7,    96,    29,    41,    42,
      30,    50,    50,    72,    65,   115,    69,    56,    86,    40,
      59,    73,    41,    42,    28,     8,     9,    31,    10,    11,
      12,    57,    64,    50,   117,    33,    95,    41,    42,     8,
       9,    37,    10,    11,    85,     1,     2,    89,     3,     4,
       5,    32,     6,    50,    36,   112,    88,   113,     7,    43,
      44,     1,     2,    39,     3,     4,     5,    93,     6,    54,
      38,    50,    38,   101,     7,   103,   104,   105,     8,     9,
      45,    10,    11,    12,    77,    78,    79,    80,    81,    82,
      60,    61,    46,    38,     8,     9,    47,    10,    11,    12,
       1,     2,    68,     3,     4,     5,    71,     6,    62,    63,
      74,    76,   102,     7,     1,     2,    87,     3,     4,     5,
      92,     6,    91,    97,    99,    98,   118,     7,   111,   110,
     116,    90,     0,     8,     9,   107,    10,    11,    12,     0,
       0,     0,     0,     6,     0,     0,     0,     8,     9,    48,
      10,    11,    12,     1,     2,     0,     3,     4,     5,     0,
       6,     0,     0,     0,     0,     0,     7,     0,    49,     8,
       9,     6,    10,    11,    34,     0,     0,     7,     6,     0,
       0,     0,     0,     0,     7,     0,     8,     9,     6,    10,
      11,    12,     0,     0,    48,     0,     0,     8,     9,    58,
      10,    11,    34,     0,     8,     9,     0,    10,    11,    34,
       0,     0,     0,     0,     8,     9,     0,    10,    11,    34
};

static const yytype_int8 yycheck[] =
{
      14,     7,     3,     4,    28,     6,     7,     8,    49,    10,
      17,    99,    84,    14,    16,    16,    88,    38,    23,    24,
      41,    27,    28,    21,    48,   113,    33,    33,    69,    20,
      36,    29,    23,    24,    16,    36,    37,    41,    39,    40,
      41,    17,    48,    49,   116,    16,    87,    23,    24,    36,
      37,     0,    39,    40,    68,     3,     4,    71,     6,     7,
       8,    27,    10,    69,    22,    19,    14,    21,    16,    25,
      26,     3,     4,    20,     6,     7,     8,    83,    10,    41,
      94,    87,    96,    15,    16,    11,    12,    13,    36,    37,
      20,    39,    40,    41,    27,    28,    29,    30,    31,    32,
      41,    42,    20,   117,    36,    37,    20,    39,    40,    41,
       3,     4,    17,     6,     7,     8,    17,    10,    43,    44,
      29,    17,    15,    16,     3,     4,    34,     6,     7,     8,
      20,    10,     9,    21,    18,    27,    15,    16,     5,    17,
      14,    72,    -1,    36,    37,    98,    39,    40,    41,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    36,    37,    16,
      39,    40,    41,     3,     4,    -1,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    -1,    35,    36,
      37,    10,    39,    40,    41,    -1,    -1,    16,    10,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    36,    37,    10,    39,
      40,    41,    -1,    -1,    16,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    10,    16,    36,    37,
      39,    40,    41,    43,    44,    45,    46,    47,    51,    52,
      53,    54,    55,    58,    59,    60,    61,    16,    16,    38,
      41,    41,    27,    16,    41,    51,    22,     0,    45,    20,
      20,    23,    24,    25,    26,    20,    20,    20,    16,    35,
      51,    63,    65,    63,    41,    56,    51,    17,    38,    51,
      52,    52,    53,    53,    51,    63,    65,    66,    17,    33,
      64,    17,    21,    29,    29,    48,    17,    27,    28,    29,
      30,    31,    32,    67,    14,    45,    65,    34,    14,    45,
      56,     9,    20,    51,    44,    65,    44,    21,    27,    18,
      49,    15,    15,    11,    12,    13,    57,    57,    50,    54,
      17,     5,    19,    21,    62,    54,    14,    44,    15
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
#line 64 "./Sintactico.y"
    {puts("COMPILACION EXITOSA!");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 81 "./Sintactico.y"
    {
	verirficar_tipos_compatibles(&tabla_simbolos, (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno); 
	crear_terceto(SIGNO_IGUAL, (yyvsp[(1) - (3)].string),transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 86 "./Sintactico.y"
    {
	verirficar_tipos_compatibles(&tabla_simbolos, (yyvsp[(1) - (3)].string), LEXICO_TIPO_STRING, yylineno);
	crear_terceto(SIGNO_IGUAL, (yyvsp[(1) - (3)].string),buscar_valor(&tabla_simbolos, (yyvsp[(3) - (3)].string)), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 "./Sintactico.y"
    {crear_terceto(SIGNO_IGUAL, VARIABLE_AUX, transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 93 "./Sintactico.y"
    {
	(yyval.string) = LEXICO_TIPO_INTEGER; 
	contar_indice = crear_terceto(VARIABLE_CANT, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 102 "./Sintactico.y"
    {

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	crear_terceto(BNE, transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 110 "./Sintactico.y"
    {
	crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, INI_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	crear_terceto(BNE,transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 122 "./Sintactico.y"
    {
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_SUMAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 138 "./Sintactico.y"
    {	
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_RESTAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 154 "./Sintactico.y"
    {	
	contador_t = 0;
	contador_e++;
	if(contador_e > 1)
	{
		apilar(&pila_expresion, &expresion_indice);
		es_nuevo_token = 0;
	}
	expresion_indice = termino_indice;

	// Para verificacion de tipos
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 170 "./Sintactico.y"
    {	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_MULT, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 185 "./Sintactico.y"
    {	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_DIVISION, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	(yyval.string) = coercion_tipos((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string), yylineno);
}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 200 "./Sintactico.y"
    {	
	contador_t++;
	if(contador_t > 1)
	{
		apilar(&pila_termino, &termino_indice);
		es_nuevo_token = 0;
	}
	termino_indice = factor_indice;

	// Para verificacion de tipos	
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 215 "./Sintactico.y"
    {	
	es_nuevo_token = 1;
	factor_indice = crear_terceto((yyvsp[(1) - (1)].string), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	verficiar_declaracion(&tabla_simbolos, (yyvsp[(1) - (1)].string), yylineno);
	(yyval.string) = strdup(buscar_tipo(&tabla_simbolos, (yyvsp[(1) - (1)].string)));
}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 225 "./Sintactico.y"
    {	
	es_nuevo_token = 1;
	factor_indice = constante_indice; 

	// Para verificacion de tipos
	(yyval.string) = strdup(buscar_tipo(&tabla_simbolos, (yyvsp[(1) - (1)].string)));
}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 234 "./Sintactico.y"
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

  case 28:

/* Line 1455 of yacc.c  */
#line 247 "./Sintactico.y"
    {
	factor_indice = contar_indice;

	// Para verificacion de tipos
	(yyval.string) = (yyvsp[(1) - (1)].string);
}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 255 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 259 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 262 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 266 "./Sintactico.y"
    {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, (yyvsp[(1) - (1)].string)), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 273 "./Sintactico.y"
    {completar_tipos(&tabla_simbolos, matriz_id, matriz_tipo, &contador_elementos);
																finalizar_semantica(matriz_id, matriz_tipo, &contador_elementos);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 277 "./Sintactico.y"
    {anadir_elementos(matriz_id, matriz_tipo, (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string), &contador_elementos);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 278 "./Sintactico.y"
    {anadir_elementos(matriz_id, matriz_tipo, (yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string), &contador_elementos);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 288 "./Sintactico.y"
    {put_indice = crear_terceto(SALIDA, (yyvsp[(2) - (2)].string), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 289 "./Sintactico.y"
    {put_indice = crear_terceto(SALIDA, buscar_valor(&tabla_simbolos, (yyvsp[(2) - (2)].string)), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 292 "./Sintactico.y"
    {get_indice = crear_terceto(ENTRADA, (yyvsp[(2) - (2)].string), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 297 "./Sintactico.y"
    {}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 298 "./Sintactico.y"
    {}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 301 "./Sintactico.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 301 "./Sintactico.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 302 "./Sintactico.y"
    {}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 303 "./Sintactico.y"
    {}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 307 "./Sintactico.y"
    {invertir_comparador(exp_logica_indice,  (yyvsp[(1) - (1)].string), PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 308 "./Sintactico.y"
    {invertir_comparador(exp_logica_indice,  (yyvsp[(2) - (2)].string), PATH_ARCHIVO_CODIGO_INTERMEDIO);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 309 "./Sintactico.y"
    {}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 312 "./Sintactico.y"
    {exp_logica_indice = condicion_indice;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 313 "./Sintactico.y"
    {auxiliar_indice = expresion_indice;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "./Sintactico.y"
    {
	char *aux = buscar_comparador(operador_comparacion);
	crear_terceto(CMP, transformar_indice(auxiliar_indice), transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	exp_logica_indice = crear_terceto(aux, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	apilar(&pila_if, &exp_logica_indice);
	(yyval.string) = aux;
}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 323 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 324 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 325 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 326 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 327 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 328 "./Sintactico.y"
    {operador_comparacion = (yyvsp[(1) - (1)].string);}
    break;



/* Line 1455 of yacc.c  */
#line 1987 "y.tab.c"
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
#line 331 "./Sintactico.y"


int main(int argc, char *argv[]) 
{
	
	yyin = fopen(argv[1], TEXTO_LECTURA);
	if(yyin == NULL)
	{	
		printf("No se pudo abrir el archivo %s\n", argv[1]);
		return ERROR;
	}
	

	crear_pila(&pila_if);

	iniciar_lexico(&tabla_simbolos);
	iniciar_semantica(&contador_elementos);
	iniciar_gci(&pila_termino, &pila_expresion, &contador_t, &contador_e, &es_nuevo_token, &recuperar_puntero, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	
	yyparse();

	finalizar_lexico(&tabla_simbolos, PATH_ARCHIVO_TS);
	finalizar_gci(&pila_termino, &pila_expresion);
	fclose(yyin);

	vaciar_pila(&pila_if);

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
