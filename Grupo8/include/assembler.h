#ifndef ASSEMBLER_H_INCLUDED
#define ASSEMBLER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./constantes.h"
#include "./lista_ts.h"

void generar_assembler(const char*, const char*, t_lista_ts*);


void generar_encabezado(FILE*);
void generar_declaraciones(FILE*, t_lista_ts*);
void generar_codigo(FILE*, const char*);
void generar_final(FILE*);

int es_constante(const char*);

#endif //ASSEMBLER_H_INCLUDED