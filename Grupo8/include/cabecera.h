#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../y.tab.h"
#include "./lista_ts.h"
#include "./lista_tercetos.h"
#include "./pila.h"
#include "./constantes.h"
#include "./lexico.h"
#include "./semantico.h"
#include "./gci.h"

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista_ts tabla_simbolos;

/* VARIABLES DE SEMANTICA */
char *matriz_id[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION], *matriz_tipo[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION];
int contador_elementos;

/* VARIABLES PARA GCI */
int numeracion_terceto;
char aux[CANTIDAD_ITOA];
int aux_indice;

// ARITMETICA
t_pila pila_termino, pila_expresion;
int factor_indice, termino_indice, expresion_indice, constante_indice; 
int contador_t, contador_e, recuperar_puntero, es_nuevo_token;
// FUNCION CONTAR 
int contar_indice; 
// ENTRADA Y SALIDA
int put_indice, get_indice;
// IF
t_lista_tercetos lista_tercetos;
t_pila pila_condicion;
int auxiliar_indice, condicion_indice, exp_logica_indice;
char *operador_comparacion;


#endif // CABECERA_H_INCLUDED