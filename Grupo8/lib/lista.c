
#include "./lista.h"

void crear_lista(t_lista *pl)
{
    *pl=NULL;
}

void vaciar_lista(t_lista *pl)
{
    t_nodo *pnodo;
    while(*pl)
    {
        pnodo=*pl;
        *pl=pnodo->psig;
        free(pnodo);
    }
}

int insertar_ordenado(t_lista *pl,const t_dato *pd,t_cmp cmp)
{
    t_nodo *pnodo;
    while(*pl && cmp(pd,&(*pl)->dato)>0)
        pl=&(*pl)->psig;
    if(*pl && cmp(pd,&(*pl)->dato)==0)
        return DUPLICADO;
    pnodo=(t_nodo*)malloc(sizeof(t_nodo));
    if(!pnodo)
        return LISTA_LLENA;
    pnodo->dato=*pd;
    pnodo->psig=*pl;
    *pl=pnodo;
    return TODO_BIEN;
}

void recorrer_lista(const t_lista *pl,t_fun fun)
{
    printf("|-------------------------------------------------------------|\n");
	printf("|\t\t\tTABLA DE SIMBOLOS                     |\n");
	printf("|-------------------------------------------------------------|\n");
	printf("|LEXEMA|\t\t\t|TIPO|\t\t\t|VALOR|\n");
	printf("|------|------------------------|----|------------------|-----|\n");
    while(*pl)
    {
        fun(&(*pl)->dato);
        pl=&(*pl)->psig;
    }
	printf("|------|------------------------|----|------------------|-----|\n");
}

void guardar_lista(const t_lista *pl, FILE *pf)
{
	t_dato *pd;
	fprintf(pf,"|LEXEMA|TIPO|VALOR|\n", pd->lexema, pd->tipo, pd->valor);
    while(*pl)
    {
        pd =  &(*pl)->dato;
		fprintf(pf,"|%s|%s|%s|\n", pd->lexema, pd->tipo, pd->valor);
        pl = &(*pl)->psig;
    }
}

int insertar_ts(const char *lexema, const char *valor, t_lista *ptabla_simbolos)
{
	int resultado = -1;
	t_dato *pd;

	// Reservamos memoria para el t_dato
	pd = (t_dato*)malloc(sizeof(t_dato));
	if(!pd)
	{
		printf("Problemas de memoria\n");
		return 1;
	}

	// El tipo no se completa así que lo dejamos en nulo
	pd->tipo = NULL;

	// El lexema lo copiamos tal cual
	pd->lexema = (char*) malloc(sizeof(char)*strlen(lexema) + 1);
	if(!(pd->lexema))
	{
		printf("Problemas de memoria\n");
		return 1;
	}
	strcpy(pd->lexema, lexema);
	
	// El valor hay que validar que no sea NULL porque hay casos en que no se completa 
	// el campo
	if(valor != NULL)
	{
		pd->valor = (char*) malloc(sizeof(char)*strlen(valor) + 1);
		if(!pd->valor)
		{
			printf("Problemas de memoria\n");
			return 1;
		}
		strcpy(pd->valor, valor);
	}
	else
	{
		pd->valor = NULL;
	}
	
	// Ya armado el t_dato insertamos en la tabla
	resultado = insertar_ordenado(ptabla_simbolos, pd, comparacion);
	if(resultado == LISTA_LLENA || resultado == DUPLICADO)
	{
		free(pd);
	}
	return 0;
}

int comparacion(const t_dato *pd1,const t_dato *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void mostrar(const t_dato *pd)
{	
	printf("|%s\t\t\t%s\t\t\t%s|\n", pd->lexema, pd->tipo, pd->valor);
}
