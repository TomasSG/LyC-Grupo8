#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "../y.tab.h"
#include "./lista.h"
#include "./cola.h"
#include "./constantes.h"
#include "./lexico.h"
#include "./semantico.h"

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista tabla_simbolos;

/* VARIABLES DE LA SEMANTICA */
int contador_lista_variables, contador_lista_tipos;


#endif // CABECERA_H_INCLUDED