#include "../include/semantico.h"
int insertar_matriz(char**, const char*, int);

void iniciar_semantica(int *pcontador)
{
	*pcontador = 0;
}

void finalizar_semantica (char **matriz_id, char **matriz_tipo, int *pcontador)
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

void error(const char *msj, int nro_linea)
{
	puts("******************************************");
	puts("ERROR");
	printf("Linea nro %d: %s\n", nro_linea, msj);
	puts("******************************************");
	exit(ERROR);
}

/* FUNCIONES CON LISTA */

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

char* coercion_tipos(char *tipo1, char *tipo2, int nro_linea)
{
	if(strcmp(tipo1, tipo2) == 0)
	{
		return tipo1;
	}
	else if(strcmp(tipo1, LEXICO_TIPO_FLOAT) == 0)
	{
		return tipo1;
	}
	return tipo2;
}

void verirficar_tipos_compatibles(t_lista *pl, const char *lexema, const char *tipo2, int nro_linea)
{
	char string_aux[CANTIDAD_ITOA], *tipo1;
	tipo1 = buscar_tipo(pl, lexema);
	if(tipo1 == NULL)
	{
		sprintf(string_aux, "La variable %s aun no se ha declarado", lexema);
		error(string_aux, nro_linea);
	}
			
	if(strcmp(tipo1, tipo2) != 0)
	{
		sprintf(string_aux, "No se puede asignar a un %s un tipo %s", tipo1, tipo2);
		error(string_aux, nro_linea);
	}
}

void verficiar_declaracion(t_lista *pl, const char *lexema, int nro_linea)
{
	char string_aux[CANTIDAD_ITOA], *tipo;
	tipo = buscar_tipo(pl, lexema);
	if(tipo == NULL)
	{
		sprintf(string_aux, "La variable %s aun no se ha declarado", lexema);
		error(string_aux, nro_linea);
	}
}