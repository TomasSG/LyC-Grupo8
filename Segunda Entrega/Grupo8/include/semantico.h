#ifndef SEMANTICO_H_INCLUDED
#define SEMANTICO_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "./cola.h"
#include "./constantes.h"

void inicializar_semantica(t_cola*, t_cola*, int*, int*);
void reiniciar_semantica(t_cola*, int*);
t_dato_cola* crear_dato(const char*);
void anadir_elemento(t_cola*, const t_dato_cola*, int*);



int error_semantico(const char*, const int);

#endif 