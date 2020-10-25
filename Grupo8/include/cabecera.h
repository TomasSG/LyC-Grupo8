#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../y.tab.h"
#include "./lista.h"
#include "./constantes.h"
#include "./lexico.h"
#include "./semantico.h"

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista tabla_simbolos;

/* VARIABLES DE LA SEMANTICA */
int contador_variables, contador_tipos;
t_cola cola_variables;
t_cola cola_tipos;


#endif // CABECERA_H_INCLUDED