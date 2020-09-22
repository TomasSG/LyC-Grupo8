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
ELSE			"Else"
PUT				"PUT"
GET				"GET"
DIM				"DIM"

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
OP_ASIGNACION	":="
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
{CONST_HEXA}	{printf("Hexa: %s\n", yytext);}
{CONST_BINARIA}	
{COMENTARIO}	
{CONST_STRING}	
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

