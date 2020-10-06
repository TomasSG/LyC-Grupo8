%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "y.tab.h"
int yystopparser=0;
FILE  *yyin;
%}

				/* LISTA DE TOKENS */
/* PALABRAS RESERVADAS */
%token	WHILE
%token	IF
%token	ELSE
%token	PUT
%token	GET
%token	DIM
%token	AS
%token	CONTAR
%token	INTEGER
%token	FLOAT
%token	STRING

/* SIGNOS PUNTUACION Y OTROS */
%token	LLAVE_ABIERTO
%token	LLAVE_CERRADO
%token	PAR_ABIERTO
%token	PAR_CERRADO
%token	COR_ABIERTO
%token	COR_CERRADO
%token	PUNTO_COMA
%token	COMA

/* OPERADORES */
%token	OP_ASIGNACION
%token	OP_SUMA
%token	OP_RESTA
%token	OP_DIVISION
%token	OP_MULT
%token	OP_LE
%token	OP_LEQ
%token	OP_GE
%token	OP_GEQ
%token	OP_NE
%token	OP_IGUAL
%token	OP_AND
%token	OP_OR
%token	OP_NOT

/* CONSTANTES */
%token	CONST_ENTERA
%token	CONST_REAL
%token	CONST_STRING
%token	CONST_BINARIA
%token	CONST_HEXA

/* VARIABLES */
%token	ID

/* COMENTARIOS */
%token	COMENTARIO
/* ______________________________________________________________ */

/* DECLARACION DE REGLAS SINTACTICAS */
%%

programa	: bloque
		;

bloque		: sentencia bloque
		| sentencia
		;

sentencia	: asignacion {printf("ASIGNACION \n");} PUNTO_COMA 
			| declaracion {printf("DECLARACION DE VARIABLES \n");} PUNTO_COMA 
			| salida PUNTO_COMA {printf("PUT \n");}
			| entrada PUNTO_COMA {printf("GET \n");}
			| bloqueWhile {printf("WHILE \n");}
			| bloqueIf {printf("IF \n");}
		;

/* REGLAS PARA LA ASIGNACION */
asignacion	: ID OP_ASIGNACION cuenta
		;

cuenta		: termino OP_SUMA cuenta
		| termino OP_RESTA cuenta
		| termino
		;

termino		: factor OP_MULT termino
		| factor OP_DIVISION termino
		| factor
		;

factor		: PAR_ABIERTO cuenta PAR_CERRADO
		| ID
		| CONST_BINARIA
		| CONST_HEXA
		| CONST_REAL
		| CONST_ENTERA
		| funcionContar
		;
		
/* REGLAS PARA LA DECLARACION DE VARIABLES */

declaracion	: DIM listaVariables AS listaTipos
		;

listaVariables	: OP_LE variables OP_GE
		;

variables	: ID COMA variables
		| ID
		;

listaTipos	: OP_LE tipos OP_GE
		;

tipos		: tipoDeDato COMA tipos
		|tipoDeDato
		;

tipoDeDato	: FLOAT
		| INTEGER
		| STRING
		;
		
/* REGLAS PARA PUT Y GET */

salida		: PUT ID
		| PUT CONST_STRING
		;

entrada		: GET ID
		;

/* REGLAS PARA LA DECLARACION DE WHILE E IF */

bloqueWhile	: WHILE PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO
		| WHILE condicion sentencia
		;
/* REVISAR REGLAS DEL IF, NO CUBRE TODOS LOS CASOS*/
bloqueIf	: IF PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO resto_if
			| IF PAR_ABIERTO condicion PAR_CERRADO sentencia
			;
resto_if	: ELSE LLAVE_ABIERTO bloque LLAVE_CERRADO
			| sentencia
			;
		
condicion	: expLogica OP_AND condicion
		| expLogica OP_OR condicion
		| expLogica
		;

expLogica	: PAR_ABIERTO condicion PAR_CERRADO
		| cuenta comparador cuenta
		;

comparador	: OP_IGUAL
		| OP_LE
		| OP_LEQ
		| OP_GE
		| OP_GEQ
		| OP_NE
		| OP_NOT
		;
/* REGLAS PARA CONTAR */

funcionContar	: CONTAR PAR_ABIERTO cuenta PUNTO_COMA listaFactores PAR_CERRADO
		;

listaFactores	: COR_ABIERTO factores COR_CERRADO
		;

factores	: factor COMA factores
		| factor
		;
		
%%

int main(int argc,char *argv[])
{
  if ((yyin = fopen(argv[1], "rt")) == NULL)
  {
	printf("\nNo se puede abrir el archivo: %s\n", argv[1]);
  }
  else
  {
	yyparse();
  }
  fclose(yyin);
  return 0;
}
int yyerror(void)
     {
       printf("Error Sintactico\n");
	 system ("Pause");
	 //exit (1);
     }
