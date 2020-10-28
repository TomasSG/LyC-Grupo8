#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../y.tab.h"
#include "./lista.h"
#include "./pila.h"
#include "./constantes.h"
#include "./lexico.h"
#include "./semantico.h"
#include "./gci.h"

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista tabla_simbolos;

/* VARIABLES DE SEMANTICA */
char *matriz_id[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION], *matriz_tipo[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION];
int contador_elementos;

/* VARIABLES PARA GCI */
int contador_t, contador_e, recuperar_puntero, es_nuevo_token;
int f_indice, t_indice, e_indice, l_indice, p_indice, a_indice;
int numeracion_terceto;
t_pila pila_t, pila_e;
char aux[CANTIDAD_ITOA];

#endif // CABECERA_H_INCLUDED