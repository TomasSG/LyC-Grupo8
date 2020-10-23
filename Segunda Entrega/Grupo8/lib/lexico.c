#include "../include/lexico.h"

char* sacar_comillas(const char *s)
{
	int i, largo = strlen(s);
	char *inicio, *resultado;
	resultado = (char*) malloc(sizeof(char) * largo - LEXICO_CANTIDAD_COMILLAS + 1);
	if(!resultado)
	{
		printf("Problemas con memoria\n");
		return NULL;
	}
	inicio = resultado;
	while(*s) {
		if( *s != '\"')
		{		
			*resultado = *s;
			resultado++;
			s++;
		}
		else 
		{
			s++;
		}
	}
	*resultado = '\0';
	return inicio;		
}

char* agregar_guion_bajo(const char *s)
{
	char* resultado;
	resultado =(char*) malloc(sizeof(char) * strlen(s) + LEXICO_CANTIDAD_GUIONES_BAJOS + 1);
	if(!resultado)
	{
		printf("Problemas con memoria\n");
		return NULL;
	}
	strcpy(resultado, "_");
	strcat(resultado, s);
	return resultado;
}

char* convertir_cadena_decimal(const char *s)
{
	char *aux, resultado[CANTIDAD_ITOA];
	int valor_numerico = 0, i = 0;
	double base = 0;

	
	// Necesitamos el auxiliar solo para dar vuelta la cadena con los números
	aux = (char*) malloc(sizeof(char) * strlen(s) + 1);
	if(aux == NULL)
	{
		printf("Problemas con memoria\n");
		return NULL;
	}
	strcpy(aux, &s[2]);
	aux = strrev(aux);

	// Esto determina la base con la letra que se encuentra en segunda posición
	if(s[1] == 'b' ||  s[1] == 'B')
	{
		base = 2;
	}
	else if(s[1] == 'x' ||  s[1] == 'X')
	{
		base = 16;
	}

	// Esto hace la converisón a base 10 pero lo almacena como int
	for(i = 0; i < strlen(aux); i++)
	{
		valor_numerico += convertir_caracter_decimal(aux[i]) * pow(base, i);
	}

	// El itoa para devolver la string en base 10
	return itoa(valor_numerico, resultado, 10);
}

int convertir_caracter_decimal(const char c)
{
	// La lista de valores es para poder mapear el valor numérico con el caracter
	char valores[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int i = 0;

	// Si el caracter representa un digito en 0-9 entonces hay conversión directa
	for(i = 0; i < 10; i++)
	{
		if(c == valores[i])
		{
			return i;
		}
	}

	// Si el caracter es un valor de hexa A-F entonces llevo todo a mayus para evitar
	// problemas sienta case sensitive
	for(i = 10; i < 16; i++)
	{
		if(toupper(c) == toupper(valores[i]))
		{
			return i;
		}
	}

	return ERROR;
}

char* adelantar_ceros(char *s)
{
	while(s && *s == '0')
	{
		s++;
	}	

	return s;
}

int error_lexico(const char *msj, const int nro_linea)
{
	printf("Error lexico\n");
	printf("Linea nro %d: %s\n", nro_linea, msj);
	exit(ERROR);
}

/* FUNCIONES DE VERIFICACION */


void verificar_string(const char *s, const int nro_linea)
{
	if(strlen(s) > LEXICO_MAXIMA_CANTIDAD_CARACTERES_STRING)
	{
		error_lexico("String supera la maxima cantidad de caracteres", nro_linea);
	}
}

void verificar_rango_real(char *s, const int nro_linea)
{
	// Rango para 32b en float 3.4*10^-38 a 3.4*10^38
	double valor = 0;

	s = adelantar_ceros(s);

	if(strlen(s) > LEXICO_MAXIMA_CANTIDAD_CARACTERES_REAL)
	{
		error_lexico("Real fuera de rango", nro_linea);
	}

	valor = atof(s);

	if(valor > LEXICO_MAXIMO_VALOR_REAL)
	{
		error_lexico("Real fuera de rango", nro_linea);
	}
}

void verificar_rango_entero(char *s, const int nro_linea)
{
	// Rango para 16b en int -32768 a 32767, pero lo tomamos simétrico el intervalo
	int valor = 0;
	
	s = adelantar_ceros(s);

	if(strlen(s) > LEXICO_MAXIMA_CANTIDAD_CARACTERES_ENTERO)
	{
		error_lexico("Entero fuera de rango", nro_linea);
	}

	valor = atoi(s);

	if(valor > LEXICO_MAXIMO_VALOR_ENTERO)
	{
		error_lexico("Entero fuera de rango", nro_linea);
	}
}

/* FUNCIONES RELACIONADAS CON LSITAS */

void guardar_tabla_simbolos(const t_lista *pl, const char *path)
{
	t_dato_lista *pd;
	char auxiliar[CANTIDAD_ITOA];
	FILE *pf = fopen(path, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s\n", path);
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

int insertar_ts(const char *lexema, const char *valor, int longitud, t_lista *ptabla_simbolos)
{
	int resultado = -1;
	t_dato_lista *pd;
	// Reservamos memoria para el t_dato_lista
	pd = (t_dato_lista*)malloc(sizeof(t_dato_lista));
	if(pd == NULL)
	{
		printf("Problemas de memoria\n");
		return LISTA_LLENA;
	}

	// El tipo no se completa así que lo dejamos en nulo
	pd->tipo = NULL;

	// El lexema lo copiamos tal cual
	pd->lexema = (char*)malloc(sizeof(char) * strlen(lexema) + 1);
	if(pd->lexema == NULL)
	{
		printf("Problemas de memoria\n");
		return LISTA_LLENA;
	}
	strcpy(pd->lexema, lexema);
	
	// El valor hay que validar que no sea NULL porque hay casos en que no se completa el campo
	if(valor != NULL)
	{
		pd->valor = (char*) malloc(sizeof(char) * strlen(valor) + 1);
		if(pd->valor == NULL)
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

	// La longitud la copiamos tal cual
	pd->longitud = longitud;
	
	// Ya armado el t_dato_lista insertamos en la tabla
	resultado = insertar_ordenado(ptabla_simbolos, pd, comparacion);
	if(resultado == LISTA_LLENA || resultado == LISTA_DUPLICADO)
	{
		free(pd);
		return resultado;
	}
	return TODO_BIEN;
}

int comparacion(const t_dato_lista *pd1,const t_dato_lista *pd2)
{
    return strcmp(pd1->lexema, pd2->lexema);
}

void mostrar(const t_dato_lista *pd)
{	
	printf("|%-35s|%-35s|%-35s|%d|\n", pd->lexema, pd->tipo, pd->valor, pd->longitud);
}
