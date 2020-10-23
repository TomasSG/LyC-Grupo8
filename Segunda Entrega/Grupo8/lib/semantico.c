#include "../include/semantico.h"

void inicializar_semantica(t_cola *pcola_variables, t_cola *pcola_tipos, int *pcontador_variables, int *pcontador_tipos)
{
	crear_cola(pcola_variables);
	crear_cola(pcola_tipos);
	*pcontador_variables = 0;
	*pcontador_tipos = 0;
}

void reiniciar_semantica(t_cola *pcola, int *pcontador)
{
	vaciar_cola(pcola);
	*pcontador = 0;
}

t_dato_cola* crear_dato(const char *string)
{
	
	t_dato_cola *pdato;
	pdato = (t_dato_cola*) malloc(sizeof(t_dato_cola));
	if(pdato == NULL)
	{
		printf("No hay suficiente memoria\n");
		return NULL;
	}
	pdato->string = (char*) malloc(sizeof(char*) * strlen(string)  + 1);
	if(pdato->string == NULL)
	{
		printf("No hay suficiente memoria\n");
		return NULL;
	}
	strcpy(pdato->string, string);
	return pdato;
}

void anadir_elemento(t_cola *pcola, const t_dato_cola *pdato, int *pcontador)
{
	
	if(pdato == NULL || acolar(pcola, pdato) == COLA_LLENA)
	{
		printf("No hay suficiente memoria\n");
		exit(ERROR);
	}
	(*pcontador)++;
}

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
				printf("No hay suficiente memoria\n");
				return LISTA_LLENA;
			}
			strcpy((*pl)->dato.tipo, tipo);
			return TODO_BIEN;
		}
        pl=&(*pl)->psig;
    }
	return LISTA_NO_EXISTE_ELEMENTO;
}

void completar_tipos(t_lista *ptabla_simbolos, t_cola *pcola_variables, t_cola *pcola_tipos, int *pcontador_variables, int *pcontador_tipos, int nro_linea)
{
	int retorno;
	t_dato_cola dato_variable, dato_tipo;
	if(*pcontador_tipos != *pcontador_variables)
	{
		error_semantico("En la declaracion de variables, la lista de tipos y de variables deben coincidir en cantidad", nro_linea);
	}
	while(desacolar(pcola_variables, &dato_variable) == TODO_BIEN && desacolar(pcola_tipos, &dato_tipo) == TODO_BIEN)
	{
		retorno = cambiar_campo_tipo(ptabla_simbolos, dato_variable.string, dato_tipo.string);
		if( retorno == LISTA_LLENA)
		{
			printf("No hay suficiente memoria\n");
			exit(ERROR);
		}
		if( retorno == LISTA_NO_EXISTE_ELEMENTO)
		{
			error_semantico("Aun no se declaro dicha variable", nro_linea);
		}
	}
}

int error_semantico(const char *msj, const int nro_linea)
{
	printf("Error semantico\n");
	printf("Linea nro %d: %s\n", nro_linea, msj);
	exit(ERROR);
}