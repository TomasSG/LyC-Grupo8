#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include "./constantes.h"

typedef char* t_dato_cola;
typedef struct s_nodo_cola
{
    t_dato_cola dato;
    struct s_nodo_cola *psig;
}t_nodo_cola;

typedef struct
{
    t_nodo_cola *ppri;
    t_nodo_cola *pult;

} t_cola;

void crear_cola (t_cola *);
int cola_vacia (const t_cola*);
int cola_llena (const t_cola*);
int acolar (t_cola*,const t_dato_cola*);
int desacolar (t_cola*,t_dato_cola*);
int ver_primero (const t_cola*,t_dato_cola*);
void vaciar_cola (t_cola*);

#endif
