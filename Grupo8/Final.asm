include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0123456789                        	db	"0123456789"                       , '$', 10 dup (?)
_abcdefghijklmnopqrstuvwyxz        	db	"abcdefghijklmnopqrstuvwyxz"       , '$', 26 dup (?)
_correcto_                         	db	"Correcto!"                        , '$', 9 dup (?)
_hola_mundo_                       	db	"Hola Mundo!"                      , '$', 11 dup (?)
_ingrese_el_numero__               	db	"Ingrese el numero: "              , '$', 19 dup (?)

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

displayString _hola_mundo_
newline 1
displayString _abcdefghijklmnopqrstuvwyxz
newline 1
displayString _abcdefghijklmnopqrstuvwyxz
newline 1
displayString _0123456789
newline 1
displayString _ingrese_el_numero__
newline 1
displayString _correcto_
newline 1

MOV EAX, 4C00H
INT 21h
END START 
