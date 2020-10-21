#ifndef CABECERA_H_INCLUDED
#define CABECERA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "./lista.h"
#include "./utilitarias.h"
#include "../y.tab.h"
#include "./constantes.h"

/* VARIABLES GLOBALES */
extern FILE *yyin;
extern int yylineno;
t_lista tabla_simbolos;

#endif // CABECERA_H_INCLUDED