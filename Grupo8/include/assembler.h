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

int es_constante(const char*);

#endif //ASSEMBLER_H_INCLUDED