#ifndef UTILITARIAS_H_INCLUDED
#define UTILITARIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./constantes.h"
#include "./lista_ts.h"

char* sacar_comillas(const char*);
char* agregar_guion_bajo(const char*);
char* estandarizar_cadena(const char*);
char* convertir_cadena_decimal(const char*);
int convertir_caracter_decimal(const char);
char* adelantar_ceros(char*);
int error_lexico(const char*, int);

/* FUNCIONES DE VERIFICACION */
void verificar_string(const char*, int);
void verificar_rango_entero(char*, int);
void verificar_rango_real(char*, int);

int es_caracter_valido(const char);
int es_numero(const char);
int es_letra_min(const char);
int es_letra_mayus(const char);

/* FUNCIONES RELACIOANDAS CON LISTA */
void iniciar_lexico(t_lista_ts*);
void finalizar_lexico(t_lista_ts*, const char*);
void insertar_ts(const char*,const char*, const char*, int, t_lista_ts*);

#endif // UTILITARIAS_H_INCLUDEDs