
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     ID = 296,
     COMENTARIO = 297
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
#define COMENTARIO 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "Sintactico.y"

	char *str_val;



/* Line 1676 of yacc.c  */
#line 142 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


