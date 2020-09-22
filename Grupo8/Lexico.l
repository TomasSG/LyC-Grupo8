%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

FILE *yyin;
int yyval;
%}

%option noyywrap
%option yylineno

LETRA			[a-zA-Z]
DIGITO			[0-9]
DIGITO_BINARIO	[01]
DIGITO_HEXA		[0-9a-fA-F]

/* Palabras reservadas */
WHILE			"while"
IF				"if"
ELSE			"else"|"Else"
PUT				"PUT"
GET				"GET"
DIM				"DIM"
CONTAR			"contar"
INTEGER			"Integer"
FLOAT			"Float"


/* Signos puntuación y otros */
LLAVE_ABIERTO	"{"
LLAVE_CERRADO	"}"
PAR_ABIERTO		"("
PAR_CERRADO		")"
COR_ABIERTO		"["
COR_CERRADO		"]"
PUNTO_COMA		";"
COMA			","

/* Operadores */
OP_ASIGNACION	":"
OP_SUMA 		"+"
OP_RESTA		"-"
OP_DIVISION		"/"
OP_MULT			"*"
OP_LE			"<"
OP_LEQ			"<="
OP_GE			">"
OP_GEQ			">="
OP_NOT			"<>"
OP_AND			"and"
OP_OR			"or"

/* Constantes*/
CONST_ENTERA	{DIGITO}+
CONST_REAL		{DIGITO}*"."{DIGITO}*
CONST_STRING	\".{0,30}\"
CONST_BINARIA	0b{DIGITO_BINARIO}+
CONST_HEXA		0x{DIGITO_HEXA}+

/* Variables */
ID				{LETRA}({LETRA}|{DIGITO}|"_")*

/* Comentarios */
COMENTARIO		"*-".*"-*"

%%

{WHILE}			|	
{IF}			|	
{ELSE}			|
{PUT}			|
{GET}			|	
{DIM}			|	
{INTEGER}		|
{FLOAT}			{printf("(Palabra reservada) %s", yytext);}

{LLAVE_ABIERTO}	|
{LLAVE_CERRADO}	|
{PAR_ABIERTO}	|
{PAR_CERRADO}	|
{COR_ABIERTO}	|
{COR_CERRADO}	|
{PUNTO_COMA}	|
{COMA}			{printf("(Signo puntuacion) %s", yytext);}

{OP_ASIGNACION} |
{OP_SUMA}		|
{OP_RESTA}		|
{OP_DIVISION}	|
{OP_MULT}		|
{OP_LE}			|
{OP_LEQ}		|	
{OP_GE}			|
{OP_GEQ}		|	
{OP_NOT}		|
{OP_AND}		|
{OP_OR}			{printf("(Operador) %s", yytext);}

{CONST_ENTERA}	{printf("(CONST_ENTERA) %s", yytext);}
{CONST_REAL}	{printf("(CONST_REAL) %s", yytext);}
{CONST_STRING}	{printf("(CONST_STRING) %s", yytext);}
{CONST_BINARIA}	{printf("(CONST_B2) %s", yytext);}
{CONST_HEXA}	{printf("(CONST_B16) %s", yytext);}

{ID}			{printf("(ID) %s", yytext);}

{COMENTARIO}	{printf("(COMENTARIo) %s", yytext);}

%%

int main(int argc, char *argv[]) 
{
	yyin = fopen(argv[1], "rt");
	if(yyin == NULL)
	{	
		printf("\nNo se pudo abrir el archivo %s\n", argv[1]);
	}
	else
	{
		yylex();
	}
	fclose(yyin);
	return 0;
}

int yyerror(void)
{
	printf("\nError léxico\n");
	exit(1);
}

