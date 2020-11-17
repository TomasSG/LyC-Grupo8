.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0                                 	dd	0.00
_0.342                             	dd	0.342
_02.5                              	dd	02.5
_0b10                              	dd	2.00
_0b111010                          	dd	58.00
_0x7FF                             	dd	2047.00
_1                                 	dd	1.00
_256                               	dd	256.00
_4                                 	dd	4.00
_52                                	dd	52.00
_92                                	dd	92.00
_Ingrese un valor para actual:     	db	"Ingrese un valor para actual: "   , '$', 30 dup (?)
_La suma es:                       	db	"La suma es: "                     , '$', 12 dup (?)
_Prueba.txt LyC Tema 1!            	db	"Prueba.txt LyC Tema 1!"           , '$', 22 dup (?)
_mayor que 2 y distinto de cero    	db	"mayor que 2 y distinto de cero"   , '$', 30 dup (?)
_no es mayor que 2                 	db	"no es mayor que 2"                , '$', 17 dup (?)
actual                             	dd	?
contador                           	dd	?
promedio                           	dd	?
suma                               	dd	?
	