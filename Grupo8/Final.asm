include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0123456789                        	db	"0123456789"                       , '$', 10 dup (?)
_ABCDEFGHIJKLMN__OPQRSTUVWYXZ      	db	"ABCDEFGHIJKLMNÑOPQRSTUVWYXZ"     , '$', 28 dup (?)
_Correcto_                         	db	"Correcto!"                        , '$', 9 dup (?)
_Hola_Mundo_                       	db	"Hola Mundo!"                      , '$', 11 dup (?)
_Ingrese_el_numero__               	db	"Ingrese el numero: "              , '$', 19 dup (?)
_abcdefghijklmnopqrstuvwyxz        	db	"abcdefghijklmnopqrstuvwyxz"       , '$', 26 dup (?)

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

displayString _Hola_Mundo_
displayString _abcdefghijklmnopqrstuvwyxz
displayString _ABCDEFGHIJKLMN__OPQRSTUVWYXZ
displayString _0123456789
displayString _Ingrese_el_numero__
displayString _Correcto_

MOV EAX, 4C00H
INT 21h
END START 
