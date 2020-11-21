include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_1                                 	dd	1.00
_10                                	dd	10.00
_2                                 	dd	2.00
_4                                 	dd	4.00
_ingrese_un_valor_a                	db	"Ingrese un valor a"               , '$', 18 dup (?)
_ingrese_un_valor_b                	db	"Ingrese un valor b"               , '$', 18 dup (?)
_ingrese_un_valor_para_c           	db	"Ingrese un valor para c"          , '$', 23 dup (?)
_la_tenes_adentro_lu               	db	"La tenes adentro LU"              , '$', 19 dup (?)
_la_tenes_adentro_mayoru           	db	"La tenes adentro Mayoru"          , '$', 23 dup (?)
_me_encanta_lyc_                   	db	"Me encanta LyC!"                  , '$', 15 dup (?)
_while                             	db	"WHILE"                            , '$', 5 dup (?)
a                                  	dd	?
b                                  	dd	?
c                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

DisplayString _ingrese_un_valor_a
newline 1
GetFloat a
DisplayString _ingrese_un_valor_b
newline 1
GetFloat b
_ET_4:
FLD a
FLD _2
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNB _ET_47
_ET_9:
DisplayString _while
newline 1
FLD a
FLD _1
FADD
FSTP a
FLD b
FLD _1
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_39
_ET_19:
DisplayString _la_tenes_adentro_lu
newline 1
DisplayString _ingrese_un_valor_para_c
newline 1
GetFloat c
_ET_23:
FLD c
FLD _4
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNAE _ET_37
FLD c
FLD _10
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNBE _ET_37
_ET_32:
DisplayString _me_encanta_lyc_
newline 1
DisplayString _ingrese_un_valor_para_c
newline 1
GetFloat c
JMP _ET_23
_ET_37:
JMP _ET_41
_ET_39:
DisplayString _la_tenes_adentro_mayoru
newline 1
_ET_41:
FLD b
FLD _1
FADD
FSTP b
JMP _ET_4
_ET_47:

MOV EAX, 4C00H
INT 21h
END START 
