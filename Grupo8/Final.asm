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
_2_5                               	dd	2.5
_36                                	dd	36.00
_3_4                               	dd	3.4
_4                                 	dd	4.00
_5                                 	dd	5.00
_el_valor_de_a_es                  	db	"El valor de a es"                 , '$', 16 dup (?)
_ingrese_a                         	db	"Ingrese a"                        , '$', 9 dup (?)
_ingrese_b                         	db	"Ingrese b"                        , '$', 9 dup (?)
a                                  	dd	?
b                                  	dd	?
c                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

DisplayString _ingrese_a
newline 1
GetFloat a
DisplayString _ingrese_b
newline 1
GetFloat b
FLD a
FLD b
FMUL
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
JNE _ET_14
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_14:
FLD _1
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_20
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_20:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_26
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_26:
FLD _36
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_32
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_32:
FLD _3_4
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
FLD _2_5
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
FLD _2
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
FLD _4
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_56
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_56:
FLD _5
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_62
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_62:
FLD @cant
FSTP a
DisplayString _el_valor_de_a_es
newline 1
DisplayFloat a, 2
newline 1

MOV EAX, 4C00H
INT 21h
END START 
