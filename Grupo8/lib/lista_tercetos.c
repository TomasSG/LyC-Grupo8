#include "../include/lista_tercetos.h"

void crear_lista_tercetos(t_lista_tercetos *pl)
{
    *pl=NULL;
}

void vaciar_lista_tercetos(t_lista_tercetos *pl)
{
    t_nodo_lista_tercetos *pnodo;
    while(*pl)
    {
        pnodo=*pl;
        *pl=pnodo->psig;
        free(pnodo);
    }
}

int insertar_ordenado_tercetos(t_lista_tercetos *pl, const t_dato_lista_tercetos *pd,t_cmp cmp)
{
    t_nodo_lista_tercetos *pnodo;
    while(*pl && cmp(pd,&(*pl)->dato)>0)
        pl=&(*pl)->psig;
    if(*pl && cmp(pd,&(*pl)->dato)==0)
        return LISTA_DUPLICADO;
    pnodo=(t_nodo_lista_tercetos*)malloc(sizeof(t_nodo_lista_tercetos));
    if(!pnodo)
        return LISTA_LLENA;
    pnodo->dato=*pd;
    pnodo->psig=*pl;
    *pl=pnodo;
    return TODO_BIEN;
}

int comparacion_tercetos(const t_dato_lista_tercetos *pd1, const t_dato_lista_tercetos *pd2)
{
    return pd1->nro - pd2->nro
}
