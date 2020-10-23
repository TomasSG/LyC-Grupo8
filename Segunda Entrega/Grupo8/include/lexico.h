#ifndef UTILITARIAS_H_INCLUDED
#define UTILITARIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./constantes.h"

char* sacar_comillas(const char*);
char* agregar_guion_bajo(const char*);
char* convertir_cadena_decimal(const char*);
int convertir_caracter_decimal(const char);
char* adelantar_ceros(char*);
int error_lexico(const char*, const int);

/* FUNCIONES DE VERIFICACION */
void verificar_string(const char*, const int);
void verificar_rango_entero(char*, const int);
void verificar_rango_real(char*, const int);


#endif // UTILITARIAS_H_INCLUDED