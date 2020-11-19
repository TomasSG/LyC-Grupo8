#ifndef ASSEMBLER_H_INCLUDED
#define ASSEMBLER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./constantes.h"
#include "./lista_ts.h"
#include "./lista_tercetos.h"

void generar_assembler(const char*, const t_lista_tercetos*, const t_lista_ts*);


void generar_encabezado(FILE*);
void generar_declaraciones(FILE*, const t_lista_ts*);
void generar_codigo(FILE*, const t_lista_tercetos*);
void generar_final(FILE*);


void operacion_aritmetica(FILE*, const char*);

int es_constante(const char*);
int es_operador_aritmetico(const char*);
int es_etiqueta(const char*);
int es_factor(const char*, const char*);
int es_asignacion(const char*);

#endif //ASSEMBLER_H_INCLUDED