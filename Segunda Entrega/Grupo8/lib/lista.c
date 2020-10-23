#include "../include/lista.h"

void crear_lista(t_lista *pl)
{
    *pl=NULL;
}

void vaciar_lista(t_lista *pl)
{
    t_nodo_lista *pnodo;
    while(*pl)
    {
        pnodo=*pl;
        *pl=pnodo->psig;
        free(pnodo);
    }
}

int insertar_ordenado(t_lista *pl,const t_dato_lista *pd,t_cmp cmp)
{
    t_nodo_lista *pnodo;
    while(*pl && cmp(pd,&(*pl)->dato)>0)
        pl=&(*pl)->psig;
    if(*pl && cmp(pd,&(*pl)->dato)==0)
        return LISTA_DUPLICADO;
    pnodo=(t_nodo_lista*)malloc(sizeof(t_nodo_lista));
    if(!pnodo)
        return LISTA_LLENA;
    pnodo->dato=*pd;
    pnodo->psig=*pl;
    *pl=pnodo;
    return TODO_BIEN;
}

void recorrer_lista(const t_lista *pl,t_fun fun)
{
    while(*pl)
    {
        fun(&(*pl)->dato);
        pl=&(*pl)->psig;
    }
}
