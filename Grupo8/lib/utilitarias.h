#ifndef UTILITARIAS_H_INCLUDED
#define UTILITARIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define PATH_ARCHIVO_TS "./ts.txt"
#define TEXTO_ESCRITURA "wt"
#define TEXTO_LECTURA "rt"
#define CORRECTO 0
#define ERROR 1

#define CANTIDAD_COMILLAS 2
#define CANTIDAD_GUIONES_BAJOS 1
#define MAXIMA_CANTIDAD_CARACTERES_STRING 30
#define MAXIMA_CANTIDAD_CARACTERES_REAL 41
#define MAXIMO_VALOR_REAL 3.4e38
#define MAXIMA_CANTIDAD_CARACTERES_ENTERO 5
#define MAXIMO_VALOR_ENTERO 32768

char* sacar_comillas(const char*);
char* agregar_guion_bajo(const char*);
char* convertir_cadena_decimal(const char*);
int convertir_caracter_decimal(const char);
char* adelantar_ceros(char*);
int error_lexico(const char*, const int);

/* FUNCIONES DE VERIFICACION */
int verificar_string(const char*, const int);
int verificar_rango_entero(char*, const int);
int verificar_rango_real(char*, const int);


#endif // UTILITARIAS_H_INCLUDED