#include "../include/semantico.h"

int cambiar_campo_tipo(t_lista*, const char*, const char*);
int insertar_matriz(char**, const char*, int);


void iniciar_semantica(int *pcontador)
{
	*pcontador = 0;
}

void resetear_semantica (char **matriz_id, char **matriz_tipo, int *pcontador)
{
	while((*pcontador) > 0)
	{
		free(matriz_id[(*pcontador) - 1]);
		free(matriz_tipo[(*pcontador) - 1]);
		(*pcontador) --;
	}
}

int insertar_matriz(char **matriz, const char *string, int indice)
{
	matriz[indice] = (char*) malloc(sizeof(char) * strlen(string) + 1);
	if(matriz[indice] == NULL)
	{
		return ERROR;
	}
	strcpy(matriz[indice], string);
	return TODO_BIEN;
}


void anadir_elementos(char **matriz_id, char **matriz_tipo, const char *id, const char *tipo, int *pcontador)
{
	if( (*pcontador) == SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION)
	{
		printf("No se pueden declarar mas de %d variables en una sola linea de declaracion\n", SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION);
		exit(ERROR);
	}
	if(insertar_matriz(matriz_id, id, *pcontador) == ERROR || insertar_matriz(matriz_tipo, tipo, *pcontador) == ERROR)
	{
		printf("Problemas con memoria\n");
		exit(ERROR);
	}
	(*pcontador)++;	
}

/* FUNCIONES CON LISTA */

int cambiar_campo_tipo(t_lista *pl, const char *lexema, const char *tipo)
{
	while(*pl)
    {
        if( strcmp((*pl)->dato.lexema, lexema) == 0)
		{
			free(&(*pl)->dato.tipo);
			(*pl)->dato.tipo = (char*) malloc(sizeof(char) * strlen(tipo) + 1);
			if(&(*pl)->dato.tipo == NULL)
			{
				return LISTA_LLENA;
			}
			strcpy((*pl)->dato.tipo, tipo);
			return TODO_BIEN;
		}
        pl=&(*pl)->psig;
    }
	return LISTA_NO_EXISTE_ELEMENTO;
}

void completar_tipos(t_lista *ptabla_simbolos, char **matriz_id, char **matriz_tipo, int *pcontador)
{
	int retorno, indice_fin = (*pcontador) - 1;
	while(indice_fin >= 0)
	{
		retorno = cambiar_campo_tipo(ptabla_simbolos, matriz_id[indice_fin], matriz_tipo[(*pcontador) - indice_fin - 1]);
		if( retorno == LISTA_LLENA)
		{
			printf("No hay suficiente memoria\n");
			exit(ERROR);
		}
		if( retorno == LISTA_NO_EXISTE_ELEMENTO)
		{
			printf("No se encontro el elemento %s\n", matriz_id[indice_fin]);
			exit(ERROR);
		}
		indice_fin --;
	}
	
}