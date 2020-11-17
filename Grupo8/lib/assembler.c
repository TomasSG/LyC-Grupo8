#include "../include/assembler.h"

void generar_encabezado(FILE*);
void generar_declaraciones(FILE*, t_lista_ts*);
void generar_codigo(FILE*, const char*);
void generar_final(FILE*);



void generar_assembler(const char *path_assembler, const char *path_intermedio, t_lista_ts *pl)
{
	FILE *pf = fopen(path_assembler, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s\n", path_assembler);
		exit(ERROR);
	}
	
	generar_encabezado(pf);
	generar_declaraciones(pf, pl);
	generar_codigo(pf, path_intermedio);
	generar_final(pf);
	puts("Sopa de verduras");
	
	fclose(pf);
}

void generar_encabezado(FILE *pf)
{
	fprintf(pf, ".MODEL LARGE\n");
	fprintf(pf, ".386\n");
	fprintf(pf, ".STACK 200h\n");
}

void generar_declaraciones(FILE *pf, t_lista_ts *pl)
{
}

void generar_codigo(FILE *pf, const char *path_intermedio)
{
}

void generar_final(FILE *pf)
{
}
