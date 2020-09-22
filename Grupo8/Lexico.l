%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* DEFINICIONES PARA LA LISTA */
#define TODO_BIEN 1
#define LISTA_LLENA 0
#define LISTA_VACIA -1
#define DUPLICADO -2
#define NO_EXISTE -3
#define EXISTE -4

typedef struct
{
	char *lexema;
	char *tipo;
	char *valor;
}t_dato;

typedef struct s_nodo
{
    t_dato dato;
    struct s_nodo *psig;
}t_nodo;

typedef t_nodo* t_lista;
typedef int(*t_cmp)(const t_dato*,const t_dato*);
typedef void(*t_fun)(const t_dato*);

void crear_lista(t_lista*);
void vaciar_lista(t_lista*);
int insertar_ordenado(t_lista*,const t_dato*,t_cmp);
void recorrer_lista(const t_lista*,t_fun);

int comparacion(const t_dato*,const t_dato*);
void mostrar(const t_dato*);

/* Algunos define para funciones */
#define CON_VALOR 1
#define SIN_VALOR 0

/* Variables globales */
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

/* Palabras reservadas */
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

{WHILE}			|	
{IF}			|	
{ELSE}			|
{PUT}			|
{GET}			|	
{DIM}			|
{AS}			|
{CONTAR}		|	
{INTEGER}		|
{FLOAT}			{/*printf("(Palabra reservada) %s", yytext);*/}

{LLAVE_ABIERTO}	|
{LLAVE_CERRADO}	|
{PAR_ABIERTO}	|
{PAR_CERRADO}	|
{COR_ABIERTO}	|
{COR_CERRADO}	|
{PUNTO_COMA}	|
{COMA}			{/*printf("(Signo puntuacion) %s", yytext);*/}

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
{OP_OR}			{/*printf("(Operador) %s", yytext);*/}

{CONST_ENTERA}	|
{CONST_REAL}	|
{CONST_STRING}	|
{CONST_BINARIA}	|
{CONST_HEXA}	{insertar_ts(yytext, CON_VALOR);}

{ID}			{insertar_ts(yytext, SIN_VALOR);}

{COMENTARIO}	{/*printf("(COMENTARIo) %s", yytext);*/}
"\n"
"\t"

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
		crear_lista(&tabla_simbolos);
		yylex();
		recorrer_lista(&tabla_simbolos, mostrar);
	}
	vaciar_lista(&tabla_simbolos);
	fclose(yyin);
	return 0;
}

int yyerror(void)
{
	printf("\nError léxico\n");
	exit(1);
}

int insertar_ts(char *string, int opcion)
{
	int resultado = -1;
	t_dato *pd;
	
	pd = (t_dato*)malloc(sizeof(t_dato));
	if(!pd)
	{
		printf("Problemas de memoria\n");
		return 1;
	}

	pd->tipo = NULL;
	
	if(opcion == SIN_VALOR)
	{
		pd->lexema = (char*) malloc(sizeof(char)*strlen(string) + 1);
		if(!(pd->lexema))
		{
			printf("Problemas de memoria\n");
			return 1;
		}
		
		strcpy(pd->lexema, string);
		pd->valor = NULL;
	}
	else if (opcion == CON_VALOR)
	{

		pd->lexema = (char*) malloc(sizeof(char)*strlen(string) + 2);
		if(!(pd->lexema))
		{
			printf("Problemas de memoria\n");
			return 1;
		}
		
		strcpy(pd->lexema, "_");
		strcat(pd->lexema, string);

		pd->valor = (char*) malloc(sizeof(char)*strlen(string) + 1);
		if(!pd->valor)
		{
			printf("Problemas de memoria\n");
			return 1;
		}
		strcpy(pd->valor, string);
	}
	
	resultado = insertar_ordenado(&tabla_simbolos, pd, comparacion);
	if(resultado == LISTA_LLENA || resultado == DUPLICADO)
	{
		free(pd);
	}
	return 0;
}

/* Funciones de lista */

void crear_lista(t_lista *pl)
{
    *pl=NULL;
}

void vaciar_lista(t_lista *pl)
{
    t_nodo *pnodo;
    while(*pl)
    {
        pnodo=*pl;
        *pl=pnodo->psig;
        free(pnodo);
    }
}

int insertar_ordenado(t_lista *pl,const t_dato *pd,t_cmp cmp)
{
    t_nodo *pnodo;
    while(*pl && cmp(pd,&(*pl)->dato)>0)
        pl=&(*pl)->psig;
    if(*pl && cmp(pd,&(*pl)->dato)==0)
        return DUPLICADO;
    pnodo=(t_nodo*)malloc(sizeof(t_nodo));
    if(!pnodo)
        return LISTA_LLENA;
    pnodo->dato=*pd;
    pnodo->psig=*pl;
    *pl=pnodo;
    return TODO_BIEN;
}

void recorrer_lista(const t_lista *pl,t_fun fun)
{
    printf("|-------------------------------------------------------------|\n");
	printf("|\t\t\tTABLA DE SIMBOLOS                     |\n");
	printf("|-------------------------------------------------------------|\n");
	printf("|LEXEMA|\t\t\t|TIPO|\t\t\t|VALOR|\n");
	printf("|------|------------------------|----|------------------|-----|\n");
    while(*pl)
    {
        fun(&(*pl)->dato);
        pl=&(*pl)->psig;
    }
	printf("|------|------------------------|----|------------------|-----|\n");
}

int comparacion(const t_dato *pd1,const t_dato *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void mostrar(const t_dato *pd)
{	
	printf("|%s\t\t\t%s\t\t\t%s|\n", pd->lexema, pd->tipo, pd->valor);
}
