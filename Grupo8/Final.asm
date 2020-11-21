include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0                                 	dd	0.00
_1                                 	dd	1.00
_2                                 	dd	2.00
_3                                 	dd	3.00
_4                                 	dd	4.00
_ari_la_tiene_adentro              	db	"Ari la tiene adentro"             , '$', 20 dup (?)
_ingrese_un_valor_para_actual__    	db	"Ingrese un valor para actual: "   , '$', 30 dup (?)
_lu_la_tiene_adentro               	db	"Lu la tiene adentro"              , '$', 19 dup (?)
_mayoru_la_tiene_adentro           	db	"Mayoru la tiene adentro"          , '$', 23 dup (?)
_prueba_txt_lyc_tema_1_            	db	"Prueba.txt LyC Tema 1!"           , '$', 22 dup (?)
_tomas_la_tiene_adentro            	db	"Tomas la tiene adentro"           , '$', 22 dup (?)
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
FLD actual
FLD _0
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JE _ET_16
_ET_7:
FLD actual
FLD _2
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JBE _ET_14
_ET_12:
DisplayString _mayoru_la_tiene_adentro
newline 1
_ET_14:
JMP _ET_63
_ET_16:
FLD _0
FSTP contador
_ET_19:
FLD contador
FLD _2
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNBE _ET_62
_ET_24:
FLD contador
FLD _1
FADD
FSTP contador
DisplayString _lu_la_tiene_adentro
newline 1
FLD contador
FSTP @aux
FLD _2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_38
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_38:
FLD _3
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_44
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_44:
FLD _4
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_50
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_50:
FLD @cant
FLD _1
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_58
_ET_55:
DisplayString _tomas_la_tiene_adentro
newline 1
JMP _ET_60
_ET_58:
DisplayString _ari_la_tiene_adentro
newline 1
_ET_60:
JMP _ET_19
_ET_62:
_ET_63:

MOV EAX, 4C00H
INT 21h
END START