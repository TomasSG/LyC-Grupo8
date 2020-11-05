#include "../include/gci.h"

char* obtener_indice(char*);
char* get_comparador_invertido(const char*);

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

char* buscar_comparador(const char *op)
{
	if(strcmp(op, OPERADOR_LE) == 0)
	{
		return BGE;
	}

	if(strcmp(op, OPERADOR_LEQ) == 0)
	{
		return BGT;
	}

	if(strcmp(op, OPERADOR_GE) == 0)
	{
		return BLE;
	}

	if(strcmp(op, OPERADOR_GEQ) == 0)
	{
		return BLT;
	}

	if(strcmp(op, OPERADOR_NE) == 0)
	{
		return BEQ;
	}

	if(strcmp(op, OPERADOR_IGUAL) == 0)
	{
		return BNE;
	}

	return NULL;
}

char* obtener_indice(char *s)
{
	char *res, *inicio;
	res = (char*) malloc(sizeof(char) * 10);
	if(res == NULL)
	{
		return NULL;
	}
	inicio = res;
	while( *s != ']')
	{
		*res = *s;
		s++;
		res++;
	}
	*res = ']';
	res++;
	res = '\0';
	return inicio;
}

char* get_comparador_invertido(const char *op)
{
	if(strcmp(op, BGE) == 0)
	{
		return BLT;
	}

	if(strcmp(op, BGT) == 0)
	{
		return BLE;
	}

	if(strcmp(op, BLE) == 0)
	{
		return BGT;
	}

	if(strcmp(op, BLT) == 0)
	{
		return BGE;
	}

	if(strcmp(op, BEQ) == 0)
	{
		return BNE;
	}

	if(strcmp(op, BNE) == 0)
	{
		return BEQ;
	}

	return NULL;
}	

void invertir_comparador(int indice, const char *op, const char *path)
{
	FILE *pf = fopen(path, TEXTO_LECTURA_ESCRITURA);
	char registro[CANTIDAD_ITOA];
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s", path);
		exit(ERROR);
	}
	

	while(fgets(registro, sizeof(registro), pf))
	{
		
		if(strcmp(obtener_indice(registro), transformar_indice(indice - 1)) == 0)
		{	
			fseek(pf, 0L, SEEK_CUR);
			fprintf(pf, "[%d] (%s, %s, %s)\n", indice, get_comparador_invertido(op), SIGNO_VACIO, SIGNO_VACIO);
			fclose(pf);
			return;
		}	
	}
	fclose(pf);
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

