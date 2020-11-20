#include "../include/assembler.h"



void generar_assembler(const char *path_assembler, const t_lista_tercetos *p_tercetos, const t_lista_ts *p_ts)
{
	FILE *pf = fopen(path_assembler, TEXTO_ESCRITURA);
	if(pf == NULL)
	{
		printf("No se pudo abrir el archivo %s\n", path_assembler);
		exit(ERROR);
	}
	
	generar_encabezado(pf);
	generar_declaraciones(pf, p_ts);
	generar_codigo(pf, p_tercetos);
	generar_final(pf);
	
	fclose(pf);
}

void generar_encabezado(FILE *pf)
{
	fprintf(pf, "include number.asm\n");
	fprintf(pf, "include macros2.asm\n\n");
	fprintf(pf, ".MODEL LARGE\n");
	fprintf(pf, ".386\n");
	fprintf(pf, ".STACK 200h\n");
}

void generar_declaraciones(FILE *pf, const t_lista_ts *pl)
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

void generar_codigo(FILE *pf, const t_lista_tercetos *pl)
{
	fprintf(pf, "\n.CODE\n");
	fprintf(pf, "START:\n");
	fprintf(pf, "MOV EAX, @DATA\n");
	fprintf(pf, "MOV DS, EAX\n");
	fprintf(pf, "MOV ES, EAX\n\n");

	while(*pl)
    {
		
        if(es_operador_aritmetico((*pl)->dato.s1))
		{
			operacion_aritmetica(pf, (*pl)->dato.s1);
		} 
		else if(es_etiqueta((*pl)->dato.s1))
		{
			fprintf(pf, "%s:\n", (*pl)->dato.s1);
		}
		else if(es_factor((*pl)->dato.s2, (*pl)->dato.s3))
		{
			fprintf(pf, "%s %s\n", CMD_PUSH, (*pl)->dato.s1);
		}
		else if(es_asignacion((*pl)->dato.s1))
		{
			fprintf(pf, "%s %s\n", CMD_POP, (*pl)->dato.s2);
		}
		else if(es_salida((*pl)->dato.s1))
		{
			operacion_salida(pf, (*pl)->dato.s2);
		}
        
		pl=&(*pl)->psig;
    }
}

void generar_final(FILE *pf)
{
	fprintf(pf, "\nMOV EAX, 4C00H\n");
	fprintf(pf, "INT 21h\n");
	fprintf(pf, "END START \n");
}


void operacion_aritmetica(FILE *pf, const char *op)
{
	if(strcmp(op, SIGNO_SUMAR) == 0)
	{
		fprintf(pf, "%s\n", CMD_SUMAR);
	}
	else if(strcmp(op, SIGNO_RESTAR) == 0)
	{
		fprintf(pf, "%s\n", CMD_RESTAR);
	}
	else if(strcmp(op, SIGNO_DIVISION) == 0)
	{
		fprintf(pf, "%s\n", CMD_DIVIDIR);
	}
	else if(strcmp(op, SIGNO_MULT) == 0)
	{
		fprintf(pf, "%s\n", CMD_MULTIPLICAR);
	}
}

void operacion_salida(FILE *pf, const char *s)
{
	if(es_constante(s))
	{
		fprintf(pf, "%s %s\n", CMD_OUT_STRING, s);
	}
	else
	{	
		fprintf(pf, "%s %s, 2\n", CMD_OUT_FLOAT, s);
	}
	fprintf(pf, "%s\n", CMD_NUEVA_LINEA);
}

int es_constante(const char *s)
{
	return *s == '_';
}

int es_operador_aritmetico(const char *s)
{
	return strcmp(s, SIGNO_SUMAR) == 0 || strcmp(s, SIGNO_RESTAR) == 0 || strcmp(s, SIGNO_DIVISION) == 0 || strcmp(s, SIGNO_MULT) == 0; 
}

int es_etiqueta(const char *s)
{	
	return strncmp(s, ETIQUETA, strlen(ETIQUETA)) == 0;
}

int es_factor(const char *s1, const char *s2)
{
	return strcmp(s1, SIGNO_VACIO) == 0 && strcmp(s2, SIGNO_VACIO) == 0;
}

int es_asignacion(const char *s)
{
	return strcmp(s, SIGNO_IGUAL) == 0;
}

int es_salida(const char *s)
{
	return strcmp(s, SALIDA) == 0;
}