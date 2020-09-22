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

/* Palabras reservadas */
WHILE			"while"
IF				"if"


/* Signos puntuación y otros */
LLAVE_ABIERTO	"{"
LLAVE_CERRADO	"}"
PAR_ABIERTO		"("
PAR_CERRADO		")"
PUNTO_COMA		";"

/* Operadores */
OP_ASIGNACION	":="

/* Constantes*/
CONST_ENTERA	{DIGITO}+
CONST_REAL		{DIGITO}*"."{DIGITO}*
CONST_STRING	\".{0,30}\"


/* Variables */
ID				{LETRA}({LETRA}|{DIGITO}|"_")*

%%
{CONST_STRING}	{printf("String: %s\n", yytext);}
{CONST_ENTERA}	
{CONST_REAL}	
{ID}
"\t"
"\n"			

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

