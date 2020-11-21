include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_1                                 	dd	1.00
_2                                 	dd	2.00
_a_es_menor_2                      	db	"a es menor 2"                     , '$', 12 dup (?)
_ingrese_un_valor_a                	db	"Ingrese un valor a"               , '$', 18 dup (?)
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
_ET_2:
FLD a
FLD _2
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNB _ET_14
_ET_7:
DisplayString _while
newline 1
FLD a
FLD _1
FADD
FSTP a
JMP _ET_2
_ET_14:
FLD a
FLD _2
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_21
_ET_19:
DisplayString _a_es_menor_2
newline 1
_ET_21:

MOV EAX, 4C00H
INT 21h
END START 
