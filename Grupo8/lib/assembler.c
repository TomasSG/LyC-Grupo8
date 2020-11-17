#include "../include/assembler.h"



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
	fprintf(pf, "\n.DATA\n");
	while(*pl)
    {
		if(es_constante((*pl)->dato.lexema))
		{
			if(strcmp((*pl)->dato.tipo, LEXICO_TIPO_STRING) == 0)
			{
				fprintf(pf, "%-35s\t%-2s\t%-35s, \'$\', %d dup (?)\n",(*pl)->dato.lexema, PRECISION_STRING, (*pl)->dato.valor, (*pl)->dato.longitud);
			}
			else
			{
				if(strcmp((*pl)->dato.tipo, LEXICO_TIPO_INTEGER) == 0)
				{
					fprintf(pf, "%-35s\t%-2s\t%s.00\n",(*pl)->dato.lexema, PRECISION_INTEGER, (*pl)->dato.valor);
				}
				else
				{
					fprintf(pf, "%-35s\t%-2s\t%s\n",(*pl)->dato.lexema, PRECISION_FLOAT, (*pl)->dato.valor);
				}
			}
		}
		else
		{
			fprintf(pf, "%-35s\t%-2s\t?\n", (*pl)->dato.lexema, PRECISION_VARIABLE);
		}

        pl=&(*pl)->psig;
    }
}

void generar_codigo(FILE *pf, const char *path_intermedio)
{
}

void generar_final(FILE *pf)
{
}

int es_constante(const char *s)
{
	return *s == '_';
}