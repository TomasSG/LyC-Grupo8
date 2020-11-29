include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0                                 	dd	0.00
_02_5                              	dd	02.5
_0_342                             	dd	0.342
_0b10                              	dd	2.00
_0b111010                          	dd	58.00
_0x7FF                             	dd	2047.00
_1                                 	dd	1.00
_256                               	dd	256.00
_4                                 	dd	4.00
_52                                	dd	52.00
_92                                	dd	92.00
_ingrese_un_valor_para_actual__    	db	"Ingrese un valor para actual: "   , '$', 30 dup (?)
_la_suma_es__                      	db	"La suma es: "                     , '$', 12 dup (?)
_mayor_que_2_y_distinto_de_cero    	db	"mayor que 2 y distinto de cero"   , '$', 30 dup (?)
_no_es_mayor_que_2                 	db	"no es mayor que 2"                , '$', 17 dup (?)
_prueba_txt_lyc_tema_1_            	db	"Prueba.txt LyC Tema 1!"           , '$', 22 dup (?)
actual                             	dd	?
contador                           	dd	?
promedio                           	dd	?
suma                               	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

DisplayString _prueba_txt_lyc_tema_1_
newline 1
DisplayString _ingrese_un_valor_para_actual__
newline 1
GetFloat actual
FLD _0
FSTP contador
FLD _02_5
FLD _0x7FF
FADD
FSTP suma
_ET_9:
FLD contador
FLD _92
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNBE _ET_61
_ET_14:
FLD contador
FLD _1
FADD
FSTP contador
FLD contador
FLD _0_342
FDIV
FLD contador
FLD actual
FLD contador
FMUL
FSTP @aux
FLD _256
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_33
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_33:
FLD _0b10
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_39
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_39:
FLD _52
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_45
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_45:
FLD _4
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_51
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_51:
FLD @cant
FMUL
FADD
FSTP actual
FLD suma
FLD actual
FADD
FSTP suma
JMP _ET_9
_ET_61:
DisplayString _la_suma_es__
newline 1
DisplayFloat suma, 2
newline 1
FLD actual
FLD _0b10
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JBE _ET_75
FLD actual
FLD _0
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JE _ET_75
_ET_72:
DisplayString _mayor_que_2_y_distinto_de_cero
newline 1
JMP _ET_83
_ET_75:
FLD actual
FLD _0b111010
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNB _ET_82
_ET_80:
DisplayString _no_es_mayor_que_2
newline 1
_ET_82:
_ET_83:

MOV EAX, 4C00H
INT 21h
END START