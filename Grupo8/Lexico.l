%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "./lib/lista.h"
#include "./lib/utilitarias.h"

/* FUNCIONES DE VERIFICACION */
int verificar_string(const char*);
int verificar_rango_entero(char*);
int verificar_rango_real(char*);

/* VARIABLES GLOBALES */
FILE *yyin;
int yyval;
t_lista tabla_simbolos;
%}

%option noyywrap
%option yylineno

LETRA			[a-zA-Z]
DIGITO			[0-9]
DIGITO_BINARIO	[01]
DIGITO_HEXA		[0-9a-fA-F]

/* PALABRAS RESERVADAS */
WHILE			"while"
IF				"if"
ELSE			"else"|"Else"
PUT				"PUT"
GET				"GET"
DIM				"DIM"
AS				"AS"
CONTAR			"contar"
INTEGER			"Integer"
FLOAT			"Float"
STRING			"String"

/* SIGNOS PUNTUACION Y OTROS */
LLAVE_ABIERTO		"{"
LLAVE_CERRADO		"}"
PAR_ABIERTO			"("
PAR_CERRADO			")"
COR_ABIERTO			"["
COR_CERRADO			"]"
PUNTO_COMA			";"
COMA				","

/* OPERADORES */
OP_ASIGNACION		":="
OP_SUMA 			"+"
OP_RESTA			"-"
OP_DIVISION			"/"
OP_MULT				"*"
OP_LE				"<"
OP_LEQ				"<="
OP_GE				">"
OP_GEQ				">="
OP_NE				"<>"
OP_IGUAL			"=="
OP_AND				"and"
OP_OR				"or"
OP_NOT				"not"

/* CONSTANTES */
CONST_ENTERA		{DIGITO}+
CONST_REAL			({DIGITO}+"."{DIGITO}*)|({DIGITO}*"."{DIGITO}+)
CONST_STRING		\".*\"
CONST_BINARIA		0b{DIGITO_BINARIO}+
CONST_HEXA			0x{DIGITO_HEXA}+

/* VARIABLES */
ID			{LETRA}({LETRA}|{DIGITO}|"_")*

/* COMENTARIOS */
COMENTARIO		"*-".*"-*"

%%

{WHILE}				|	
{IF}				|	
{ELSE}				|
{PUT}				|
{GET}				|	
{DIM}				|
{AS}				|
{CONTAR}			|		
{INTEGER}			|
{FLOAT}				{/*printf("(Palabra reservada) %s", yytext);*/}

{LLAVE_ABIERTO}		|
{LLAVE_CERRADO}		|
{PAR_ABIERTO}		|
{PAR_CERRADO}		|
{COR_ABIERTO}		|
{COR_CERRADO}		|
{PUNTO_COMA}		|
{COMA}				{/*printf("(Signo puntuacion) %s", yytext);*/}

{OP_ASIGNACION} 	|
{OP_SUMA}			|
{OP_RESTA}			|
{OP_DIVISION}		|
{OP_MULT}			|
{OP_LE}				|
{OP_LEQ}			|		
{OP_GE}				|
{OP_GEQ}			|	
{OP_NE}				|
{OP_AND}			|
{OP_OR}				|
{OP_NOT}			{/*printf("(Operador) %s", yytext);*/}


{CONST_STRING}		{verificar_string(yytext);
					insertar_ts(agregar_guion_bajo(sacar_comillas(yytext)), sacar_comillas(yytext), &tabla_simbolos);}

{CONST_ENTERA}		{verificar_rango_entero(yytext);
					insertar_ts(agregar_guion_bajo(yytext), yytext, &tabla_simbolos);}

{CONST_REAL}		{verificar_rango_real(yytext);
					insertar_ts(agregar_guion_bajo(yytext), yytext, &tabla_simbolos);}

{CONST_BINARIA}		|
{CONST_HEXA}		{verificar_rango_entero(convertir_cadena_decimal(yytext));
					insertar_ts(agregar_guion_bajo(yytext), convertir_cadena_decimal(yytext), &tabla_simbolos);}

{ID}				{insertar_ts(yytext, NULL, &tabla_simbolos);}

{COMENTARIO}		{}
"\n"				{}
"\t"				{}

%%

int main(int argc, char *argv[]) 
{
	FILE *pf = NULL;
	yyin = fopen(argv[1], "rt");
	if(yyin == NULL)
	{	
		printf("\nNo se pudo abrir el archivo %s\n", argv[1]);
		return ERROR;
	}
	crear_lista(&tabla_simbolos);
	
	yylex();

	pf = fopen(PATH_ARCHIVO_TS, TEXTO_ESCRITURA);
	if(!pf)
	{
		printf("No se pudo crear el archivo %s para la tabla de simbolos\n", PATH_ARCHIVO_TS);
	}	
	else
	{
		guardar_lista(&tabla_simbolos, pf);
		fclose(pf);
	}

	vaciar_lista(&tabla_simbolos);
	fclose(yyin);
	return CORRECTO;
}

int yyerror(const char *msj)
{
	printf("Error lexico\n");
	printf("Linea nro %d: %s\n", yylineno, msj);
	//exit(1);
}

int verificar_string(const char *s)
{
	if(strlen(s) > 32)
	{
		yyerror("String mayor a 30 caracteres");
	}
	return CORRECTO;
}

int verificar_rango_real(char *s)
{
	// Rango para 32b en float 3.4*10^-38 a 3.4*10^38
	double valor = 0;

	s = adelantar_ceros(s);

	if(strlen(s) > 41)
	{
		yyerror("Real fuera de rango");
	}

	valor = atof(s);

	if(valor > 3.4e38)
	{
		yyerror("Real fuera de rango");
	}
	return CORRECTO;	
}

int verificar_rango_entero(char *s)
{
	// Rango para 16b en int -32768 a 32767, pero lo tomamos simétrico el intervalo
	int valor = 0;
	
	s = adelantar_ceros(s);

	if(strlen(s) > 5)
	{
		yyerror("Entero fuera de rango");
	}

	valor = atoi(s);

	if(valor > 32768)
	{
		yyerror("Entero fuera de rango");
	}
	return CORRECTO;
}