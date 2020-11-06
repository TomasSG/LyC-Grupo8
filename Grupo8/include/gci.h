#ifndef GCI_H
#define GCI_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./constantes.h"
#include "./lista_ts.h"
#include "./lista_tercetos.h"
#include "./pila.h"

void iniciar_gci(t_lista_tercetos*, t_pila*, t_pila*, t_pila*, int*, int*, int*, int*, int*);
void finalizar_gci(t_lista_tercetos*, t_pila*, t_pila*, t_pila*, const char*);
char* transformar_indice(int);
char* buscar_comparador(const char*);
void invertir_comparador(int, const char*, const char*);
int crear_terceto(const char*, const char*, const char*, int*, const char*);

#endif