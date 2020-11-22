include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_a___b                             	db	"a < b"                            , '$', 5 dup (?)
_a__b                              	db	"a >b"                             , '$', 4 dup (?)
_c____b                            	db	"c <= b"                           , '$', 6 dup (?)
_c___b                             	db	"c > b"                            , '$', 5 dup (?)
_ingrese_un_valor_a                	db	"Ingrese un valor a"               , '$', 18 dup (?)
_ingrese_un_valor_b                	db	"Ingrese un valor b"               , '$', 18 dup (?)
_ingrese_un_valor_c                	db	"Ingrese un valor c"               , '$', 18 dup (?)
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
FLD a
FLD b
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_26
_ET_8:
DisplayString _ingrese_un_valor_c
newline 1
GetFloat c
FLD c
FLD b
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JBE _ET_17
_ET_15:
DisplayString _c___b
newline 1
_ET_17:
FLD c
FLD b
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNBE _ET_24
_ET_22:
DisplayString _c____b
newline 1
_ET_24:
JMP _ET_37
_ET_26:
FLD a
FLD b
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNB _ET_34
_ET_31:
DisplayString _a___b
newline 1
JMP _ET_36
_ET_34:
DisplayString _a__b
newline 1
_ET_36:
_ET_37:

MOV EAX, 4C00H
INT 21h
END START