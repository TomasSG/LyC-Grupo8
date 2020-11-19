include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_hola_mundo_                       	db	"Hola Mundo!"                      , '$', 11 dup (?)

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

displayString _hola_mundo_
newline 1

MOV EAX, 4C00H
INT 21h
END START 
