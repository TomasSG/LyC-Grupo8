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

#endif // CABECERA_H_INCLUDED