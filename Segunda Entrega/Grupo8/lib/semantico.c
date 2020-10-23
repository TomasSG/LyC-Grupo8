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

int error_semantico(const char *msj, const int nro_linea)
{
	printf("Error lexico\n");
	printf("Linea nro %d: %s\n", nro_linea, msj);
	exit(ERROR);
}