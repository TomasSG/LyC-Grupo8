#ifndef GCI_H
#define GCI_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./constantes.h"
#include "./lista_ts.h"
#include "./pila.h"

void iniciar_gci(t_pila*, t_pila*, int*, int*, int*, int*, int*, const char*);
void finalizar_gci(t_pila*, t_pila*);
char* transformar_indice(int);
char* buscar_comparador(const char*);
void invertir_comparador(int, const char*, const char*);
int crear_terceto(const char*, const char*, const char*, int*, const char*);

#endif