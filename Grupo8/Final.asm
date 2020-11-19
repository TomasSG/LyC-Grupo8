include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_Hola_Mundo                        	db	"Hola_Mundo"                       , '$', 10 dup (?)

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

displayString _Hola_Mundo

MOV EAX, 4C00H
INT 21h
END START 
