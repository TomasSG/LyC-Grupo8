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

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista tabla_simbolos;

/* VARIABLES DE SEMANTICA */
char *matriz_id[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION], *matriz_tipo[SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION];
int contador_elementos;

#endif // CABECERA_H_INCLUDED