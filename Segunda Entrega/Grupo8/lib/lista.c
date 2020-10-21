#include "../include/lista.h"

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
        return LISTA_DUPLICADO;
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
    while(*pl)
    {
        fun(&(*pl)->dato);
        pl=&(*pl)->psig;
    }
}

void guardar_lista(const t_lista *pl, const char *path)
{
	t_dato *pd;
	FILE *pf = fopen(path, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s\n", path);
	}
	fprintf(pf,"|--------------------------------------------------------------------------------------------------------------------------|\n");
	fprintf(pf,"|												        TABLA DE SIMBOLOS												   |\n");
	fprintf(pf,"|--------------------------------------------------------------------------------------------------------------------------|\n");
	fprintf(pf,"|             LEXEMA    				 |                  TIPO                  |                VALOR                   |\n");
	fprintf(pf,"|----------------------------------------|----------------------------------------|----------------------------------------|\n");
    while(*pl)
    {
        pd =  &(*pl)->dato;
		fprintf(pf,"|%-40s|%-40s|%-40s|\n", pd->lexema, pd->tipo, pd->valor);
        pl = &(*pl)->psig;
    }
	fprintf(pf,"|--------------------------------------------------------------------------------------------------------------------------|\n");
	fclose(pf);
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
		return LISTA_LLENA;
	}

	// El tipo no se completa así que lo dejamos en nulo
	pd->tipo = NULL;

	// El lexema lo copiamos tal cual
	pd->lexema = (char*) malloc(sizeof(char)*strlen(lexema) + 1);
	if(!(pd->lexema))
	{
		printf("Problemas de memoria\n");
		return LISTA_LLENA;
	}
	strcpy(pd->lexema, lexema);
	
	// El valor hay que validar que no sea NULL porque hay casos en que no se completa el campo
	if(valor != NULL)
	{
		pd->valor = (char*) malloc(sizeof(char)*strlen(valor) + 1);
		if(!pd->valor)
		{
			printf("Problemas de memoria\n");
			return LISTA_LLENA;
		}
		strcpy(pd->valor, valor);
	}
	else
	{
		pd->valor = NULL;
	}
	
	// Ya armado el t_dato insertamos en la tabla
	resultado = insertar_ordenado(ptabla_simbolos, pd, comparacion);
	if(resultado == LISTA_LLENA || resultado == LISTA_DUPLICADO)
	{
		free(pd);
		return resultado;
	}
	return TODO_BIEN;
}

int comparacion(const t_dato *pd1,const t_dato *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void mostrar(const t_dato *pd)
{	
	printf("|%-40s|%-40s|%-40s|\n", pd->lexema, pd->tipo, pd->valor);
}
