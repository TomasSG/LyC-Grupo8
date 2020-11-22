include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_________                          	db	"@_-.!'?*"                         , '$', 8 dup (?)
_c                                 	db	"c"                                , '$', 1 dup (?)
_string_con_123                    	db	"String con 123"                   , '$', 14 dup (?)
_string_dif_ic_il_12_              	db	"String dif ic il 12!"             , '$', 20 dup (?)
_string_facil                      	db	"String facil"                     , '$', 12 dup (?)

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

DisplayString _c
newline 1
DisplayString _string_facil
newline 1
DisplayString _string_con_123
newline 1
DisplayString _string_dif_ic_il_12_
newline 1
DisplayString _________
newline 1

MOV EAX, 4C00H
INT 21h
END START