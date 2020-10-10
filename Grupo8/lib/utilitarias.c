#include "utilitarias.h"

char* sacar_comillas(const char *s)
{
	int i, largo = strlen(s);
	char *inicio, *resultado;
	resultado = (char*) malloc(sizeof(char) * largo - 2 + 1);
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
	resultado =(char*) malloc(sizeof(char) * strlen(s) + 2);
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
	char *aux, resultado[500];
	int valor_numerico = 0, i = 0;
	double base = 0;

	
	// Necesitamos el auxiliar solo para dar vuelta la cadena con los números
	aux = (char*) malloc(sizeof(char)* strlen(s) + 1);
	if(!aux)
	{
		printf("Problemas con memoria\n");
		return 0;
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

