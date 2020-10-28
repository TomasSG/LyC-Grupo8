#include "../include/gci.h"

void iniciar_gci(t_pila *pt, t_pila *pe, int *pcontador_t, int *pcontador_e, int *pes_nuevo_token, int *precuperar_puntero, int *pnumeracion, const char *path)
{
	FILE *pf = fopen(path, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo crear %s\n", path);
		exit(ERROR);
	}
	fclose(pf);
	crear_pila(pt);
	crear_pila(pe);
	*pcontador_t = 0;
	*pcontador_e = 0;
	*pes_nuevo_token = 0;
	*precuperar_puntero = 0;
	*pnumeracion = -1;
}

void finalizar_gci(t_pila *pt, t_pila *pe)
{
	vaciar_pila(pt);
	vaciar_pila(pe);
}

char* transformar_indice(int indice)
{
	char cadena_numero[100], *resultado;
	itoa(indice, cadena_numero, 10);
	resultado = (char*) malloc(sizeof(cadena_numero) + TERCETO_CANTIDAD_CORCHETES + 1);
	if(resultado == NULL)
	{
		printf("Problemas de memoria\n");
		return NULL;
	}
	strcpy(resultado, "[");
	strcat(strcat(resultado, cadena_numero), "]");
	return resultado;
}

int crear_terceto(const char *p1, const char *p2, const char *p3, int *pnumero, const char *path)
{
	FILE *pf = fopen(path, TEXTO_APPEND);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo de codigo intermedio en %s", path);
		return ERROR;
	}
	(*pnumero)++;
	fprintf(pf, "[%d] (%s, %s, %s)\n", *pnumero, p1, p2, p3);
	fclose(pf);
	return *pnumero;
}