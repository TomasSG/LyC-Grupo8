include number.asm
include macros2.asm

.MODEL LARGE
.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_2                                 	dd	2.00
_3                                 	dd	3.00
a                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

FLD _2
FLD _3
FAAD
FSTP a

MOV EAX, 4C00H
INT 21h
END START 