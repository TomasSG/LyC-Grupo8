#ifndef SEMANTICO_H_INCLUDED
#define SEMANTICO_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./lista_ts.h"
#include "./constantes.h"

void iniciar_semantica(int*);
void anadir_elementos(char**, char**, const char*, const char*, int*);
void finalizar_semantica (char**, char**, int*);
void error(const char*, int);

/* FUNCIONES CON LISTA */
void completar_tipos(t_lista_ts*, char**, char**, int*);
char* coercion_tipos(char*, char*, int);
void verirficar_tipos_compatibles(t_lista_ts*, const char*, const char*, int);
void verficiar_declaracion(t_lista_ts *, const char*, int);
#endif 