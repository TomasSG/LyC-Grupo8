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

int comparacion(const t_dato_lista *pd1,const t_dato_lista *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void guardar_lista_en_archivo(t_lista *pl, const char *path)
{
	t_dato_lista *pd;
	char auxiliar[CANTIDAD_ITOA];
	FILE *pf = fopen(path, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s\n", path);
		return;
	}
	fprintf(pf,"|-----------------------------------------------------------------------------------------------------------------------------------------------|\n");
	fprintf(pf,"|                                                      TABLA DE SIMBOLOS                                                                        |\n");
	fprintf(pf,"|-----------------------------------------------------------------------------------------------------------------------------------------------|\n");
	fprintf(pf,"|%-35s|%-35s|%-35s|%-35s|\n", "LEXEMA", "TIPO", "VALOR", "LONGITUD");
	fprintf(pf,"|-----------------------------------|-----------------------------------|-----------------------------------|-----------------------------------|\n");
    while(*pl)
    {
        pd =  &(*pl)->dato;
		if(pd->longitud == 0)
		{
			strcpy(auxiliar, " ");
		}
		else
		{
			itoa(pd->longitud, auxiliar, 10);
		}
		fprintf(pf,"|%-35s|%-35s|%-35s|%-35s|\n", pd->lexema, pd->tipo ? pd->tipo : " ", pd->valor ? pd->valor : " ", auxiliar);
        pl = &(*pl)->psig;
    }
	fprintf(pf,"|-----------------------------------------------------------------------------------------------------------------------------------------------|\n");
	fclose(pf);
}

int cambiar_campo_tipo(t_lista *pl, const char *lexema, const char *tipo)
{
	while(*pl)
    {
        if( strcmp((*pl)->dato.lexema, lexema) == 0)
		{
			free(&(*pl)->dato.tipo);
			if(((*pl)->dato.tipo = strdup(tipo)) == NULL)
			{
				return LISTA_LLENA;
			}
			return TODO_BIEN;
		}
        pl=&(*pl)->psig;
    }
	return LISTA_NO_EXISTE_ELEMENTO;
}

char* buscar_tipo(t_lista *pl, const char *lexema)
{
	while(*pl)
    {
        if( strcmp((*pl)->dato.lexema, lexema) == 0)
		{
			return (*pl)->dato.tipo;
		}
        pl=&(*pl)->psig;
    }
	return NULL;
}

char* buscar_valor(t_lista *pl, const char *lexema)
{
	while(*pl)
    {
        if( strcmp((*pl)->dato.lexema, lexema) == 0)
		{
			return (*pl)->dato.valor;
		}
        pl=&(*pl)->psig;
    }
	return NULL;
}