include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_5                                 	dd	5.00
_el_valor_es__                     	db	"El valor es: "                    , '$', 13 dup (?)
_ingrese_a_                        	db	"Ingrese a:"                       , '$', 10 dup (?)
a                                  	dd	?
b                                  	dd	?
c                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

DisplayString _ingrese_a_
newline 1
GetFloat a
FLD _5
FSTP b
FLD _5
FLD a
FMUL
FLD b
FDIV
FSTP c
DisplayString _el_valor_es__
newline 1
DisplayFloat c, 2
newline 1

MOV EAX, 4C00H
INT 21h
END START 
