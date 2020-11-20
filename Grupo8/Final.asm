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
_4                                 	dd	4.00
_5                                 	dd	5.00
_8_0                               	dd	8.0
_9_0                               	dd	9.0
_el_valor_es__                     	db	"El valor es: "                    , '$', 13 dup (?)
a                                  	dd	?
b                                  	dd	?
c                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

FLD _2
FLD _1
FADD
FLD _1
FADD
FLD _1
FADD
FLD _1
FADD
FSTP a
FLD _5
FLD _9_0
FDIV
FLD _8_0
FSUB
FSTP b
FLD _4
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
