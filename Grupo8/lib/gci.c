#include "../include/gci.h"

void crear_archivo_intermedia(const char *path)
{
	fclose(fopen(path, TEXTO_ESCRITURA));
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