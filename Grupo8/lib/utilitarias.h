#ifndef UTILITARIAS_H_INCLUDED
#define UTILITARIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#define PATH_ARCHIVO_TS "./ts.txt"
#define TEXTO_ESCRITURA "wt"
#define CORRECTO 0
#define ERROR -500

char* sacar_comillas(const char*);
char* agregar_guion_bajo(const char*);
char* convertir_cadena_decimal(const char*);
int convertir_caracter_decimal(const char);
char* adelantar_ceros(char*);


#endif // UTILITARIAS_H_INCLUDED