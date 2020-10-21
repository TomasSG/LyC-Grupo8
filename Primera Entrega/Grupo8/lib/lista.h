#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TODO_BIEN 1
#define LISTA_LLENA 0
#define LISTA_VACIA -1
#define DUPLICADO -2
#define NO_EXISTE -3
#define EXISTE -4

typedef struct
{
	char *lexema;
	char *tipo;
	char *valor;
}t_dato;

typedef struct s_nodo
{
    t_dato dato;
    struct s_nodo *psig;
}t_nodo;

typedef t_nodo* t_lista;
typedef int(*t_cmp)(const t_dato*,const t_dato*);
typedef void(*t_fun)(const t_dato*);

void crear_lista(t_lista*);
void vaciar_lista(t_lista*);
int insertar_ordenado(t_lista*,const t_dato*,t_cmp);
void recorrer_lista(const t_lista*,t_fun);
void guardar_lista(const t_lista*, FILE*);

int insertar_ts(const char*, const char*, t_lista*);
int comparacion(const t_dato*,const t_dato*);
void mostrar(const t_dato*);

#endif // LISTA_H_INCLUDED