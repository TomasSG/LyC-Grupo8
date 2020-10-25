#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./constantes.h"

typedef struct
{
	char *lexema;
	char *tipo;
	char *valor;
	int longitud;
}t_dato_lista;

typedef struct s_nodo_lista
{
    t_dato_lista dato;
    struct s_nodo_lista *psig;
}t_nodo_lista;

typedef t_nodo_lista* t_lista;
typedef int(*t_cmp)(const t_dato_lista*,const t_dato_lista*);
typedef void(*t_fun)(const t_dato_lista*);

void crear_lista(t_lista*);
void vaciar_lista(t_lista*);
int insertar_ordenado(t_lista*,const t_dato_lista*,t_cmp);
void recorrer_lista(const t_lista*,t_fun);

#endif // LISTA_H_INCLUDED