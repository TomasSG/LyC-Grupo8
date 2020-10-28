#ifndef GCI_H
#define GCI_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./constantes.h"
#include "./pila.h"

void crear_archivo_intermedia(const char*);
int crear_terceto(const char*, const char*, const char*, int*, const char*);
//t_dato* crear_dato(int, int);
char* transformar_indice(int);

#endif