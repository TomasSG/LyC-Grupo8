%{
#include "./include/cabecera.h"
%}

%union
{
	char *string;
}

/* PALABRAS RESERVADAS */
%token	WHILE
%token	IF
%token	ELSE
%token	PUT
%token	GET
%token	DIM
%token	AS
%token	CONTAR
%token	<string> INTEGER
%token	<string> FLOAT
%token	<string> STRING

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
%token <string> CONST_ENTERA CONST_REAL CONST_STRING CONST_BINARIA CONST_HEXA

/* VARIABLES */
%token <string> ID

/* DECLARACIONES TIPOS ELEMENTOS NO TERMINALES */
%type <string> tipoDeDato
%type <string> constante

/* ______________________________________________________________ */

/* DECLARACION DE REGLAS SINTACTICAS */
%%

programa	: bloque 					{printf("Regla: <programa> -> <bloque> --- COMPILACION EXITOSA\n");}
		;

bloque		: bloque sentencia 			{printf("Regla: <bloque> ->  <bloque> <sentencia>\n");}
		| sentencia 					{printf("Regla: <bloque> -> <sentencia>\n");}
		;

sentencia	: asignacion PUNTO_COMA 	{printf("Regla: <sentencia> -> <asignacion> PUNTO_COMA\n");}
			| declaracion PUNTO_COMA	{printf("Regla: <sentencia> -> <declaracion> PUNTO_COMA\n");} 
			| salida PUNTO_COMA 		{printf("Regla: <sentencia> -> <salida> PUNTO_COMA\n");} 
			| entrada PUNTO_COMA 		{printf("Regla: <sentencia> -> <entrada> PUNTO_COMA\n");}
			| bloqueWhile				{printf("Regla: <sentencia> -> <bloque_while>\n");}
			| bloqueIf					{printf("Regla: <sentencia> -> <bloque_if>\n");}
			|expresion PUNTO_COMA
		;

/* REGLAS PARA LA ASIGNACION */
asignacion	: ID OP_ASIGNACION expresion 	{printf("Regla: <asignacion> -> ID OP_ASIGNACION <expresion>\n");}
		;

/* REGLAS PARA CONTAR */
funcionContar	: CONTAR PAR_ABIERTO expresion PUNTO_COMA listaConstantes PAR_CERRADO	{printf("Regla: <funcion_contar> -> CONTAR PAR_ABIERTO <expresion> PUNTO_COMA <lista_constantes> PAR_CERRADO\n");}
		;

listaConstantes	: COR_ABIERTO constantes COR_CERRADO 	{printf("Regla: <lista_constantes> -> COR_ABIERTO <constantes> COR_CERRADO\n");}
		;

constantes	: constantes  COMA 	constante	{printf("Regla: <constantes> -> <constantes> COMA <constante>\n");}
		| constante						{printf("Regla: <constantes> -> <constante>\n");}
		;

/* REGLAS PARA ARITMETICA */
expresion : expresion OP_SUMA  termino	
{
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_e, &e_indice);
		recuperar_puntero = 0;
	}
	e_indice = crear_terceto(TERCETO_SIGNO_SUMAR, transformar_indice(e_indice), transformar_indice(t_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}

| expresion OP_RESTA termino 
{	
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_e, &e_indice);
		recuperar_puntero = 0;
	}
	e_indice = crear_terceto(TERCETO_SIGNO_RESTAR, transformar_indice(e_indice), transformar_indice(t_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 
}

| termino 
{	
	contador_t = 0;
	contador_e++;
	if(contador_e > 1)
	{
		apilar(&pila_e, &e_indice);
		es_nuevo_token = 0;
	}
	e_indice = t_indice;
}
;

termino: termino OP_MULT factor
{	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_t, &t_indice);
		recuperar_puntero = 0;
	}
	t_indice = crear_terceto(TERCETO_SIGNO_MULT, transformar_indice(t_indice), transformar_indice(f_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 
}

| termino OP_DIVISION factor 
{	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_t, &t_indice);
		recuperar_puntero = 0;
	}
	t_indice = crear_terceto(TERCETO_SIGNO_DIVISION, transformar_indice(t_indice), transformar_indice(f_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 
}

| factor 
{	
	contador_t++;
	if(contador_t > 1)
	{
		apilar(&pila_t, &t_indice);
		es_nuevo_token = 0;
	}
	t_indice = f_indice;
}						
;

factor: ID 
{	
	es_nuevo_token = 1;
	f_indice = crear_terceto($1, TERCETO_SIGNO_VACIO, TERCETO_SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}

| constante 
{	
	es_nuevo_token = 1;
	f_indice = crear_terceto($1, TERCETO_SIGNO_VACIO, TERCETO_SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}

| PAR_ABIERTO expresion PAR_CERRADO 
{	
	contador_e = 0;
	f_indice = e_indice;	
	if(es_nuevo_token == 0)
	{
		recuperar_puntero = 1;
	}
}

| funcionContar							{/* TODO: ver que hacer aca */}
;

constante : CONST_BINARIA				
| CONST_HEXA					
| CONST_REAL					
| CONST_ENTERA 			
;
		
/* REGLAS PARA LA DECLARACION DE VARIABLES */

declaracion: DIM OP_LE lista_declaracion OP_GE					{completar_tipos(&tabla_simbolos, matriz_id, matriz_tipo, &contador_elementos);
																finalizar_semantica(matriz_id, matriz_tipo, &contador_elementos);}
;

lista_declaracion: ID COMA lista_declaracion COMA tipoDeDato 	{anadir_elementos(matriz_id, matriz_tipo, $1, $5, &contador_elementos);}
| ID OP_GE AS OP_LE tipoDeDato									{anadir_elementos(matriz_id, matriz_tipo, $1, $5, &contador_elementos);}
;

tipoDeDato: FLOAT								
| INTEGER								
| STRING								
;
		
/* REGLAS PARA PUT Y GET */

salida		: PUT ID							{printf("Regla: <salida> -> PUT ID\n");}
		| PUT CONST_STRING						{printf("Regla: <salida> -> PUT CONST_STRING\n");}
		;

entrada		: GET ID							{printf("Regla: <entrada> -> GET ID\n");}
		;

/* REGLAS PARA LA DECLARACION DE WHILE E IF */

bloqueWhile	: WHILE PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO	{printf("Regla: <bloque_while> -> WHILE PAR_ABIERTO <condicion> PAR_CERRADO LLAVE_ABIERTO <bloque> LLAVE_CERRADO\n");}
		| WHILE PAR_ABIERTO condicion PAR_CERRADO sentencia		{printf("Regla: <bloque_while> -> WHILE <condicion> <sentencia>\n");}
		;

bloqueIf	: IF PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO ELSE LLAVE_ABIERTO bloque LLAVE_CERRADO {printf("Regla: <bloque_if> -> IF PAR_ABIERTO <condicion> PAR_CERRADO LLAVE_ABIERTO <bloque> LLAVE_CERRADO ELSE LLAVE_ABIERTO <bloque> LLAVE_CERRADO\n");}
			| IF PAR_ABIERTO condicion PAR_CERRADO sentencia {printf("Regla: <bloque_if> -> IF PAR_ABIERTO <condicion> PAR_CERRADO <sentencia>\n");}
			| IF PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO {printf("Regla: <bloque_if> -> IF PAR_ABIERTO <condicion> PAR_CERRADO LLAVE_ABIERTO <bloque> LLAVE_CERRADO\n");}
			;
		
condicion	: expLogica OP_AND expLogica 	{printf("Regla: <condicion> -> <exp_logica> OP_AND <exp_logica>\n");}
		| expLogica OP_OR expLogica			{printf("Regla: <condicion> -> <exp_logica> OP_OR <exp_logica>\n");}
		| OP_NOT expLogica					{printf("Regla: <condicion> -> OP_NOT <exp_logica>\n");}
		| expLogica							{printf("Regla: <condicion> -> <exp_logica>\n");}
		;

expLogica	: PAR_ABIERTO condicion PAR_CERRADO	{printf("Regla: <exp_logica> -> PAR_ABIERTO <condicion> PAR_CERRADO\n");}
		| expresion comparador expresion		{printf("Regla: <exp_logica> -> <expresion> <comparador> <expresion>\n");}
		;

comparador	: OP_IGUAL					{printf("Regla: <comparador> -> OP_IGUAL\n");}
		| OP_LE							{printf("Regla: <comparador> -> OP_LE\n");}
		| OP_LEQ						{printf("Regla: <comparador> -> OP_LEQ\n");}
		| OP_GE							{printf("Regla: <comparador> -> OP_GE\n");}
		| OP_GEQ						{printf("Regla: <comparador> -> OP_GEQ\n");}
		| OP_NE							{printf("Regla: <comparador> -> OP_NE\n");}
		;

%%

int main(int argc, char *argv[]) 
{
	
	yyin = fopen(argv[1], TEXTO_LECTURA);
	if(yyin == NULL)
	{	
		printf("No se pudo abrir el archivo %s\n", argv[1]);
		return ERROR;
	}
	
	iniciar_lexico(&tabla_simbolos);
	iniciar_semantica(&contador_elementos);
	iniciar_gci(&pila_t, &pila_e, &contador_t, &contador_e, &es_nuevo_token, &recuperar_puntero, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	
	yyparse();

	finalizar_lexico(&tabla_simbolos, PATH_ARCHIVO_TS);
	finalizar_gci(&pila_t, &pila_e);
	fclose(yyin);
	return TODO_BIEN;
}

int yyerror(void)
{
    printf("Linea %d: Error Sintactico\n", yylineno);
	exit (ERROR);
}