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
%token <string>	OP_ASIGNACION
%token <string>	OP_SUMA
%token <string>	OP_RESTA
%token <string>	OP_DIVISION
%token <string>	OP_MULT
%token <string>	OP_LE
%token <string>	OP_LEQ
%token <string>	OP_GE
%token <string>	OP_GEQ
%token <string>	OP_NE
%token <string>	OP_IGUAL
%token <string>	OP_AND
%token <string>	OP_OR
%token <string>	OP_NOT

/* CONSTANTES */
%token <string> CONST_ENTERA CONST_REAL CONST_STRING CONST_BINARIA CONST_HEXA

/* VARIABLES */
%token <string> ID

/* DECLARACIONES TIPOS ELEMENTOS NO TERMINALES */
%type <string> tipoDeDato constante factor termino expresion funcionContar
%type <string> comparador expLogica

/* ______________________________________________________________ */

/* DECLARACION DE REGLAS SINTACTICAS */
%%

programa	: bloque 					{puts("COMPILACION EXITOSA!");}
		;

bloque		: bloque sentencia 			
		| sentencia 					
		;

sentencia	: asignacion PUNTO_COMA 	
			| declaracion PUNTO_COMA	
			| salida PUNTO_COMA 		
			| entrada PUNTO_COMA 		
			| bloqueWhile				
			| bloqueIf					
			|expresion PUNTO_COMA
		;

/* REGLAS PARA LA ASIGNACION */
asignacion: ID OP_ASIGNACION expresion {
	verirficar_tipos_compatibles(&tabla_simbolos, $1, $3, yylineno); 
	crear_terceto(SIGNO_IGUAL, $1,transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}

| ID OP_ASIGNACION CONST_STRING {
	verirficar_tipos_compatibles(&tabla_simbolos, $1, LEXICO_TIPO_STRING, yylineno);
	crear_terceto(SIGNO_IGUAL, $1,buscar_valor(&tabla_simbolos, $3), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
;

/* REGLAS PARA CONTAR */
funcionContar: CONTAR PAR_ABIERTO expresion {crear_terceto(SIGNO_IGUAL, VARIABLE_AUX, transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);} PUNTO_COMA listaConstantes PAR_CERRADO {
	$$ = LEXICO_TIPO_INTEGER; 
	contar_indice = crear_terceto(VARIABLE_CANT, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
;

listaConstantes	: COR_ABIERTO constantes COR_CERRADO 	
;

constantes	: constantes  COMA 	constante {

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	crear_terceto(BNE, transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}

| constante	{
	crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, INI_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	crear_terceto(CMP, VARIABLE_AUX, transformar_indice(constante_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	crear_terceto(BNE,transformar_indice(numeracion_terceto + CANTIDAD_SALTOS_CONTAR), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	aux_indice = crear_terceto(SIGNO_SUMAR, VARIABLE_CANT, AUMENTO_VARIABLE_CANT, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	contar_indice = crear_terceto(SIGNO_IGUAL, VARIABLE_CANT, transformar_indice(aux_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
;

/* REGLAS PARA ARITMETICA */
expresion : expresion OP_SUMA  termino	
{
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_SUMAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	$$ = coercion_tipos($1, $3, yylineno);
}

| expresion OP_RESTA termino 
{	
	contador_e = 0;
	contador_t = 0;
	es_nuevo_token = 0;
	if(recuperar_puntero == 1)
	{
		desapilar(&pila_expresion, &expresion_indice);
		recuperar_puntero = 0;
	}
	expresion_indice = crear_terceto(SIGNO_RESTAR, transformar_indice(expresion_indice), transformar_indice(termino_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 

	// Para verificacion de tipos
	$$ = coercion_tipos($1, $3, yylineno);
}

| termino 
{	
	contador_t = 0;
	contador_e++;
	if(contador_e > 1)
	{
		apilar(&pila_expresion, &expresion_indice);
		es_nuevo_token = 0;
	}
	expresion_indice = termino_indice;

	// Para verificacion de tipos
	$$ = $1;
}
;

termino: termino OP_MULT factor
{	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_MULT, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO); 

	// Para verificacion de tipos
	$$ = coercion_tipos($1, $3, yylineno);
}

| termino OP_DIVISION factor 
{	
	es_nuevo_token = 0;
	contador_t = 0;
	if( recuperar_puntero == 1)
	{
		desapilar(&pila_termino, &termino_indice);
		recuperar_puntero = 0;
	}
	termino_indice = crear_terceto(SIGNO_DIVISION, transformar_indice(termino_indice), transformar_indice(factor_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	$$ = coercion_tipos($1, $3, yylineno);
}

| factor 
{	
	contador_t++;
	if(contador_t > 1)
	{
		apilar(&pila_termino, &termino_indice);
		es_nuevo_token = 0;
	}
	termino_indice = factor_indice;

	// Para verificacion de tipos	
	$$ = $1;
}						
;

factor: ID 
{	
	es_nuevo_token = 1;
	factor_indice = crear_terceto($1, SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);

	// Para verificacion de tipos
	verficiar_declaracion(&tabla_simbolos, $1, yylineno);
	$$ = strdup(buscar_tipo(&tabla_simbolos, $1));
}

| constante 
{	
	es_nuevo_token = 1;
	factor_indice = constante_indice; 

	// Para verificacion de tipos
	$$ = strdup(buscar_tipo(&tabla_simbolos, $1));
}

| PAR_ABIERTO expresion PAR_CERRADO 
{	
	contador_e = 0;
	factor_indice = expresion_indice;	
	if(es_nuevo_token == 0)
	{
		recuperar_puntero = 1;
	}

	// Para verificacion de tipos
	$$ = $2;
}

| funcionContar							
{
	factor_indice = contar_indice;

	// Para verificacion de tipos
	$$ = $1;
}
;

constante : CONST_BINARIA {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, $1), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
 	
| CONST_HEXA {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, $1), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}			
| CONST_REAL {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, $1), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
				
| CONST_ENTERA {
	constante_indice = crear_terceto(buscar_valor(&tabla_simbolos, $1), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}			
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

salida: PUT ID							{put_indice = crear_terceto(SALIDA, $2, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
| PUT CONST_STRING						{put_indice = crear_terceto(SALIDA, buscar_valor(&tabla_simbolos, $2), SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
;

entrada: GET ID							{get_indice = crear_terceto(ENTRADA, $2, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);}
;

/* REGLAS PARA LA DECLARACION DE WHILE E IF */

bloqueWhile	: WHILE PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO	{}
		| WHILE PAR_ABIERTO condicion PAR_CERRADO sentencia		{}
		;

bloqueIf: IF PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO ELSE LLAVE_ABIERTO bloque LLAVE_CERRADO {}
| IF PAR_ABIERTO condicion PAR_CERRADO sentencia {}
| IF PAR_ABIERTO condicion PAR_CERRADO LLAVE_ABIERTO bloque LLAVE_CERRADO {}
;
		
condicion	: expLogica OP_AND expLogica 	{}
| expLogica OP_OR expLogica			{}
| OP_NOT expLogica					{}
| expLogica							{}
;

expLogica: PAR_ABIERTO condicion PAR_CERRADO	{condicion_indice = exp_logica_indice;}
| expresion {auxiliar_indice = expresion_indice;} comparador expresion		
{
	crear_terceto(CMP, transformar_indice(auxiliar_indice), transformar_indice(expresion_indice), &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	exp_logica_indice = crear_terceto(buscar_comparador(operador_comparacion), SIGNO_VACIO, SIGNO_VACIO, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
}
;

comparador	: OP_IGUAL					{operador_comparacion = $1;}
		| OP_LE							{operador_comparacion = $1;}
		| OP_LEQ						{operador_comparacion = $1;}
		| OP_GE							{operador_comparacion = $1;}
		| OP_GEQ						{operador_comparacion = $1;}
		| OP_NE							{operador_comparacion = $1;}
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
	iniciar_gci(&pila_termino, &pila_expresion, &contador_t, &contador_e, &es_nuevo_token, &recuperar_puntero, &numeracion_terceto, PATH_ARCHIVO_CODIGO_INTERMEDIO);
	
	yyparse();

	finalizar_lexico(&tabla_simbolos, PATH_ARCHIVO_TS);
	finalizar_gci(&pila_termino, &pila_expresion);
	fclose(yyin);
	return TODO_BIEN;
}

int yyerror(void)
{
	puts("******************************************");
	puts("ERROR SINTACTICO");
    printf("Linea nro %d\n", yylineno);
	puts("******************************************");
	exit (ERROR);
}