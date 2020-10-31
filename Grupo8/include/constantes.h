#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED

/* CONSTATNES DE ARCHIVOS */
#define PATH_ARCHIVO_TS "./ts.txt"
#define PATH_ARCHIVO_CODIGO_INTERMEDIO "./intermedio.txt"
#define TEXTO_ESCRITURA "wt"
#define TEXTO_LECTURA "rt"
#define TEXTO_APPEND "at"

/* CONSTANTES DE RETORNOS GENERALES */
#define TODO_BIEN 0
#define ERROR 1

/* CONSTANTES DE LISTA */
#define LISTA_LLENA -1
#define LISTA_VACIA -2
#define LISTA_DUPLICADO -3
#define LISTA_NO_EXISTE_ELEMENTO -4

/* CONSTANTES DE PILA */
#define PILA_LLENA -1
#define PILA_VACIA -2

/* CONSTANTES DE LEXICO */
#define LEXICO_CANTIDAD_COMILLAS 2
#define LEXICO_CANTIDAD_GUIONES_BAJOS 1
#define LEXICO_MAXIMA_CANTIDAD_CARACTERES_STRING 30
#define LEXICO_MAXIMA_CANTIDAD_CARACTERES_REAL 41
#define LEXICO_MAXIMO_VALOR_REAL 3.4e38
#define LEXICO_MAXIMA_CANTIDAD_CARACTERES_ENTERO 5
#define LEXICO_MAXIMO_VALOR_ENTERO 32768

#define LEXICO_TIPO_STRING "String"
#define LEXICO_TIPO_FLOAT "Float"
#define LEXICO_TIPO_INTEGER "Integer"

/* CONSTANTES DE SEMANTICA */
#define SEMANTICA_MAXIMA_LONGITUD_LISTA_DECLARACION 100

/* CONSTANTES DE TERCETOS */
#define TERCETO_SIGNO_SUMAR "+"
#define TERCETO_SIGNO_RESTAR "-"
#define TERCETO_SIGNO_DIVISION "/"
#define TERCETO_SIGNO_MULT "*"
#define TERCETO_SIGNO_IGUAL ":="
#define TERCETO_SIGNO_VACIO " "
#define TERCETO_CANTIDAD_CORCHETES 2

/* CONSTANTES GENERALES */
#define CANTIDAD_ITOA 1000

#endif // CONSTANTES_H_INCLUDED