%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/* DEFINICIONES PARA LISTA*/
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
void guardar_lista(const t_lista*, FILE*);

int comparacion(const t_dato*,const t_dato*);
void mostrar(const t_dato*);


/* DEFINICIONES PARA FUNCIONES */
#define PATH_ARCHIVO_TS "./ts.txt"
#define TEXTO_ESCRITURA "wt"

int insertar_ts(char*, char*);
char* sacar_comillas(const char*);
char* agregar_guion_bajo(const char*);
char* convertir_cadena_decimal(const char*);
int convertir_caracter_decimal(const char);

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


/* SIGNOS PUNTUACION Y OTROS */
LLAVE_ABIERTO	"{"
LLAVE_CERRADO	"}"
PAR_ABIERTO		"("
PAR_CERRADO		")"
COR_ABIERTO		"["
COR_CERRADO		"]"
PUNTO_COMA		";"
COMA			","

/* OPERADORES */
OP_ASIGNACION	":="
OP_SUMA 		"+"
OP_RESTA		"-"
OP_DIVISION		"/"
OP_MULT			"*"
OP_LE			"<"
OP_LEQ			"<="
OP_GE			">"
OP_GEQ			">="
OP_NE			"<>"
OP_AND			"and"
OP_OR			"or"
OP_NOT			"not"

/* CONSTANTES */
CONST_ENTERA	{DIGITO}+
CONST_REAL		({DIGITO}+"."{DIGITO}*)|({DIGITO}*"."{DIGITO}+)
CONST_STRING	\".{0,30}\"
CONST_BINARIA	0b{DIGITO_BINARIO}+
CONST_HEXA		0x{DIGITO_HEXA}+

/* VARIABLES */
ID				{LETRA}({LETRA}|{DIGITO}|"_")*

/* COMENTARIOS */
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
{OP_NE}			|
{OP_AND}		|
{OP_OR}			|
{OP_NOT}		{/*printf("(Operador) %s", yytext);*/}


{CONST_STRING}	{insertar_ts(agregar_guion_bajo(sacar_comillas(yytext)), sacar_comillas(yytext));}
{CONST_ENTERA}	|
{CONST_REAL}	{insertar_ts(agregar_guion_bajo(yytext), yytext);}
{CONST_BINARIA}	|
{CONST_HEXA}	{insertar_ts(agregar_guion_bajo(yytext), convertir_cadena_decimal(yytext));}

{ID}			{insertar_ts(yytext, NULL);}

{COMENTARIO}	{}
"\n"
"\t"

%%

int main(int argc, char *argv[]) 
{
	FILE *pf = NULL;
	yyin = fopen(argv[1], "rt");
	if(yyin == NULL)
	{	
		printf("\nNo se pudo abrir el archivo %s\n", argv[1]);
		return 1;
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
	return 0;
}

int yyerror(void)
{
	printf("\nError léxico\n");
	exit(1);
}

int insertar_ts(char *lexema, char *valor)
{
	int resultado = -1;
	t_dato *pd;

	// Reservamos memoria para el t_dato
	pd = (t_dato*)malloc(sizeof(t_dato));
	if(!pd)
	{
		printf("Problemas de memoria\n");
		return 1;
	}

	// El tipo no se completa así que lo dejamos en nulo
	pd->tipo = NULL;

	// El lexema lo copiamos tal cual
	pd->lexema = (char*) malloc(sizeof(char)*strlen(lexema) + 1);
	if(!(pd->lexema))
	{
		printf("Problemas de memoria\n");
		return 1;
	}
	strcpy(pd->lexema, lexema);
	
	// El valor hay que validar que no sea NULL porque hay casos en que no se completa 
	// el campo
	if(valor != NULL)
	{
		pd->valor = (char*) malloc(sizeof(char)*strlen(valor) + 1);
		if(!pd->valor)
		{
			printf("Problemas de memoria\n");
			return 1;
		}
		strcpy(pd->valor, valor);
	}
	else
	{
		pd->valor = NULL;
	}
	
	// Ya armado el t_dato insertamos en la tabla
	resultado = insertar_ordenado(&tabla_simbolos, pd, comparacion);
	if(resultado == LISTA_LLENA || resultado == DUPLICADO)
	{
		free(pd);
	}
	return 0;
}

/*-------------------------------FUNCIONES DE LISTA-------------------------------*/

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

void guardar_lista(const t_lista *pl, FILE *pf)
{
	t_dato *pd;
	fprintf(pf,"|LEXEMA|TIPO|VALOR|\n", pd->lexema, pd->tipo, pd->valor);
    while(*pl)
    {
        pd =  &(*pl)->dato;
		fprintf(pf,"|%s|%s|%s|\n", pd->lexema, pd->tipo, pd->valor);
        pl = &(*pl)->psig;
    }
}

/*-------------------------------FUNCIONES AUXILIARES-------------------------------*/

char* sacar_comillas(const char *s)
{
	int i, largo = strlen(s);
	char *inicio, *resultado;
	resultado = (char*) malloc(sizeof(char) * largo - 2 + 1);
	if(!resultado)
	{
		printf("Problemas con memoria\n");
		return NULL;
	}
	inicio = resultado;
	while(*s) {
		if( *s != '\"')
		{		
			*resultado = *s;
			resultado++;
			s++;
		}
		else 
		{
			s++;
		}
	}
	*resultado = '\0';
	return inicio;		
}

char* agregar_guion_bajo(const char *s)
{
	char* resultado;
	resultado =(char*) malloc(sizeof(char) * strlen(s) + 2);
	if(!resultado)
	{
		printf("Problemas con memoria\n");
		return NULL;
	}
	strcpy(resultado, "_");
	strcat(resultado, s);
	return resultado;
}

char* convertir_cadena_decimal(const char *s)
{
	char *aux, resultado[500];
	int valor_numerico = 0, i = 0;
	double base = 0;
	
	// Necesitamos el auxiliar solo para dar vuelta la cadena con los números
	aux = (char*) malloc(sizeof(char)* strlen(s) + 1);
	if(!aux)
	{
		printf("Problemas con memoria\n");
		return 0;
	}
	strcpy(aux, &s[2]);
	aux = strrev(aux);

	// Esto determina la base con la letra que se encuentra en segunda posición
	if(s[1] == 'b' ||  s[1] == 'B')
	{
		base = 2;
	}
	else if(s[1] == 'x' ||  s[1] == 'X')
	{
		base = 16;
	}

	// Esto hace la converisón a base 10 pero lo almacena como int
	for(i = 0; i < strlen(aux); i++)
	{
		valor_numerico += convertir_caracter_decimal(aux[i]) * pow(base, i);
	}

	// El itoa para devolver la string en base 10
	return itoa(valor_numerico, resultado, 10);
}

int convertir_caracter_decimal(const char c)
{
	// La lista de valores es para poder mapear el valor numérico con el caracter
	char valores[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int i = 0;

	// Si el caracter representa un digito en 0-9 entonces hay conversión directa
	for(i = 0; i < 10; i++)
	{
		if(c == valores[i])
		{
			return i;
		}
	}

	// Si el caracter es un valor de hexa A-F entonces llevo todo a mayus para evitar
	// problemas sienta case sensitive
	for(i = 10; i < 16; i++)
	{
		if(toupper(c) == toupper(valores[i]))
		{
			return i;
		}
	}

	return -1;
}

int comparacion(const t_dato *pd1,const t_dato *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void mostrar(const t_dato *pd)
{	
	printf("|%s\t\t\t%s\t\t\t%s|\n", pd->lexema, pd->tipo, pd->valor);
}
