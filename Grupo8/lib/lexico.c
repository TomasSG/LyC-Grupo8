#include "../include/lexico.h"

char* sacar_comillas(const char *s)
{
	int i, largo = strlen(s);
	char *inicio, *resultado;
	resultado = (char*) malloc(sizeof(char) * largo - LEXICO_CANTIDAD_COMILLAS + 1);
	if(resultado == NULL)
	{
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
	if(resultado == NULL)
	{
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
	if( (aux = strdup(&s[2])) == NULL)
	{
		return NULL;
	}
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

int error_lexico(const char *msj, int nro_linea)
{
	puts("******************************************");
	puts("ERROR LEXICO");
	printf("Linea nro %d: %s\n", nro_linea, msj);
	puts("******************************************");
	exit(ERROR);
}

/* FUNCIONES DE VERIFICACION */


void verificar_string(const char *s, int nro_linea)
{
	if(strlen(s) > LEXICO_MAXIMA_CANTIDAD_CARACTERES_STRING)
	{
		error_lexico("String supera la maxima cantidad de caracteres", nro_linea);
	}
}

void verificar_rango_real(char *s, int nro_linea)
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

void verificar_rango_entero(char *s, int nro_linea)
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

void iniciar_lexico(t_lista_ts *pl)
{
	crear_lista_ts(pl);
}

void finalizar_lexico(t_lista_ts *pl, const char *path)
{
	guardar_lista_en_archivo_ts(pl, path);
	vaciar_lista_ts(pl);
}

void insertar_ts(const char *lexema, const char *tipo, const char *valor, int longitud, t_lista_ts *ptabla_simbolos)
{
	int resultado = -1;
	t_dato_lista_ts *pd;
	
	// Reservamos memoria para el t_dato_lista_ts
	pd = (t_dato_lista_ts*) malloc(sizeof(t_dato_lista_ts));
	if(pd == NULL)
	{
		puts("Problemas de memoria");
		exit(ERROR);
	}

	// El lexema lo copiamos tal cual
	if( (pd->lexema = strdup(lexema)) == NULL)
	{
		puts("Problemas de memoria");
		exit(ERROR);
	}

	// El tipo hay que validar que no sea NULL porque hay casos en que no se completa este campo
	if(tipo != NULL)
	{
		if( (pd->tipo = strdup(tipo)) == NULL)
		{
			puts("Problemas de memoria");
			exit(ERROR);
		}
	}
	else
	{
		pd->tipo = NULL;
	}
	
	// El valor hay que validar que no sea NULL porque hay casos en que no se completa este campo
	if(valor != NULL)
	{
		if( (pd->valor = strdup(valor)) == NULL)
		{
			puts("Problemas de memoria");
			exit(ERROR);
		}
	}
	else
	{
		pd->valor = NULL;
	}

	// La longitud la copiamos tal cual
	pd->longitud = longitud;
	
	// Ya armado el t_dato_lista_ts insertamos en la tabla
	resultado = insertar_ordenado_ts(ptabla_simbolos, pd, comparacion_ts);
	if(resultado == LISTA_DUPLICADO)
	{
		free(pd);
	}
	else if(resultado == LISTA_LLENA)
	{
		puts("Probelmas de memoria");
		exit(ERROR);
	}
}
