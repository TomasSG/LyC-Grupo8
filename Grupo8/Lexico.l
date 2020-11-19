%{
#include "./include/cabecera.h"
%}

%option noyywrap
%option yylineno

LETRA							[a-zA-Z]
DIGITO							[0-9]
DIGITO_BINARIO					[01]
DIGITO_HEXA						[0-9a-fA-F]

/* PALABRAS RESERVADAS */
WHILE							"while"
IF								"if"
ELSE							"else"|"Else"
PUT								"PUT"
GET								"GET"
DIM								"DIM"
AS								"AS"
CONTAR							"contar"
INTEGER							"Integer"
FLOAT							"Float"
STRING							"String"

/* SIGNOS PUNTUACION Y OTROS */
LLAVE_ABIERTO					[{]
LLAVE_CERRADO					[}]
PAR_ABIERTO						[(]
PAR_CERRADO						[)]
COR_ABIERTO						[[]
COR_CERRADO						[]]
PUNTO_COMA						[;]
COMA							[,]

/* OPERADORES */
OP_ASIGNACION					":="
OP_SUMA 						"+"
OP_RESTA						"-"
OP_DIVISION						"/"
OP_MULT							"*"
OP_LE							"<"
OP_LEQ							"<="
OP_GE							">"
OP_GEQ							">="
OP_NE							"<>"
OP_IGUAL						"=="
OP_AND							"and"
OP_OR							"or"
OP_NOT							"not"

/* CONSTANTES */
SEPARADOR_DECIMAL				[.]
COMILLAS						["]
PREFIJO_CONST_HEXA				"0x"
PREFIJO_CONST_BINARIA			"0b"

CONST_ENTERA					{DIGITO}+
CONST_REAL						({DIGITO}+{SEPARADOR_DECIMAL}{DIGITO}*)|({DIGITO}*{SEPARADOR_DECIMAL}{DIGITO}+)
CONST_STRING					{COMILLAS}.*{COMILLAS}
CONST_BINARIA					{PREFIJO_CONST_BINARIA}{DIGITO_BINARIO}+
CONST_HEXA						{PREFIJO_CONST_HEXA}{DIGITO_HEXA}+

/* VARIABLES */
ID								{LETRA}({LETRA}|{DIGITO}|"_")*

/* COMENTARIOS */
APERTURA_COMENTARIO 			"*-"
CIERRE_COMENTARIO  				"-*"
COMENTARIO						{APERTURA_COMENTARIO}.*{CIERRE_COMENTARIO}

%%

{WHILE}							{return WHILE;}	
{IF}							{return IF;}	
{ELSE}							{return ELSE;}
{PUT}							{return PUT;}
{GET}							{return GET;}
{DIM}							{return DIM;}
{AS}							{return AS;}
{CONTAR}						{return CONTAR;}		
{INTEGER}						{yylval.string = strdup(yytext); return INTEGER;}
{FLOAT}							{yylval.string = strdup(yytext); return FLOAT;}
{STRING}						{yylval.string = strdup(yytext); return STRING;}

{LLAVE_ABIERTO}					{return LLAVE_ABIERTO;}
{LLAVE_CERRADO}					{return LLAVE_CERRADO;}
{PAR_ABIERTO}					{return PAR_ABIERTO;}
{PAR_CERRADO}					{return PAR_CERRADO;}
{COR_ABIERTO}					{return COR_ABIERTO;}
{COR_CERRADO}					{return COR_CERRADO;}
{PUNTO_COMA}					{return PUNTO_COMA;}
{COMA}							{return COMA;}

{OP_ASIGNACION} 				{yylval.string = strdup(yytext); return OP_ASIGNACION;}
{OP_SUMA}						{yylval.string = strdup(yytext); return OP_SUMA;}
{OP_RESTA}						{yylval.string = strdup(yytext); return OP_RESTA;}
{OP_DIVISION}					{yylval.string = strdup(yytext); return OP_DIVISION;}
{OP_MULT}						{yylval.string = strdup(yytext); return OP_MULT;}
{OP_LE}							{yylval.string = strdup(yytext); return OP_LE;}
{OP_LEQ}						{yylval.string = strdup(yytext); return OP_LEQ;}		
{OP_GE}							{yylval.string = strdup(yytext); return OP_GE;}
{OP_GEQ}						{yylval.string = strdup(yytext); return OP_GEQ;}	
{OP_NE}							{yylval.string = strdup(yytext); return OP_NE;}
{OP_AND}						{yylval.string = strdup(yytext); return OP_AND;}
{OP_OR}							{yylval.string = strdup(yytext); return OP_OR;}
{OP_NOT}						{yylval.string = strdup(yytext); return OP_NOT;}
{OP_IGUAL}						{yylval.string = strdup(yytext); return OP_IGUAL;}


{CONST_STRING}					{char *string_sin_comillas = sacar_comillas(yytext);
								char *string_guion_bajo_est = estandarizar_cadena(agregar_guion_bajo(string_sin_comillas));
								verificar_string(string_sin_comillas, yylineno);
								insertar_ts(string_guion_bajo_est, LEXICO_TIPO_STRING, yytext, strlen(string_sin_comillas), &tabla_simbolos);
								yylval.string = strdup(string_guion_bajo_est);
								return CONST_STRING;}

{CONST_ENTERA}					{verificar_rango_entero(yytext, yylineno);
								insertar_ts(agregar_guion_bajo(yytext), LEXICO_TIPO_INTEGER, yytext, 0, &tabla_simbolos);
								yylval.string = strdup(agregar_guion_bajo(yytext));
								return CONST_ENTERA;}

{CONST_REAL}					{verificar_rango_real(yytext, yylineno);
								insertar_ts(agregar_guion_bajo(yytext), LEXICO_TIPO_FLOAT, yytext, 0, &tabla_simbolos);
								yylval.string = strdup(agregar_guion_bajo(yytext));
								return CONST_REAL;}

{CONST_BINARIA}					{char *cadena_valor_decimal = convertir_cadena_decimal(yytext);
								verificar_rango_entero(cadena_valor_decimal, yylineno);
								insertar_ts(agregar_guion_bajo(yytext), LEXICO_TIPO_INTEGER, cadena_valor_decimal, 0, &tabla_simbolos);
								yylval.string = strdup(agregar_guion_bajo(yytext));
								return CONST_BINARIA;}

{CONST_HEXA}					{char *cadena_valor_decimal = convertir_cadena_decimal(yytext);
								verificar_rango_entero(cadena_valor_decimal, yylineno);
								insertar_ts(agregar_guion_bajo(yytext), LEXICO_TIPO_INTEGER, cadena_valor_decimal, 0, &tabla_simbolos);
								yylval.string = strdup(agregar_guion_bajo(yytext));
								return CONST_HEXA;}

{ID}							{insertar_ts(yytext, NULL, NULL, 0, &tabla_simbolos); yylval.string = strdup(yytext); return ID;}

{COMENTARIO}		
[ \n\t]
.								{char aux[CANTIDAD_ITOA]; sprintf(aux, "Detectado \"%s\" como simbolo desconocido", yytext); error_lexico(aux, yylineno);}				

%%