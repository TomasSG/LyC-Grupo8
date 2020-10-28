#ifndef GCI_H
#define GCI_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./constantes.h"
#include "./pila.h"

void iniciar_gci(t_pila*, t_pila*, int*, int*, int*, int*, int*, const char*);
void finalizar_gci(t_pila*, t_pila*);
int crear_terceto(const char*, const char*, const char*, int*, const char*);
char* transformar_indice(int);

#endif