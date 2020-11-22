include number.asm
include macros2.asm

.MODEL LARGE
.386
.STACK 200h

.DATA
@aux                               	dd	?
@cant                              	dd	?
_0                                 	dd	0.00
_0b10                              	dd	2.00
_0xF                               	dd	15.00
_1                                 	dd	1.00
_15                                	dd	15.00
_1_2                               	dd	1.2
_2                                 	dd	2.00
_3                                 	dd	3.00
_4                                 	dd	4.00
_8                                 	dd	8.00
__5                                	dd	.5
_resultado_esperado__0             	db	"Resultado esperado: 0"            , '$', 21 dup (?)
_resultado_esperado__1             	db	"Resultado esperado: 1"            , '$', 21 dup (?)
_resultado_esperado__2             	db	"Resultado esperado: 2"            , '$', 21 dup (?)
a                                  	dd	?
b                                  	dd	?
c                                  	dd	?

.CODE
START:
MOV EAX, @DATA
MOV DS, EAX
MOV ES, EAX

FLD _4
FSTP @aux
FLD _1
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_8
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_8:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_14
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_14:
FLD _1
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_20
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_20:
FLD _3
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_26
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_26:
FLD @cant
FSTP a
DisplayString _resultado_esperado__0
newline 1
DisplayFloat a, 2
newline 1
DisplayString _resultado_esperado__2
newline 1
FLD _1
FSTP @aux
FLD _1
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_40
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_40:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_46
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_46:
FLD _1
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_52
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_52:
FLD _3
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_58
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_58:
FLD @cant
FSTP a
DisplayFloat a, 2
newline 1
FLD _1_2
FSTP @aux
FLD _1_2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_70
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_70:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_76
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_76:
FLD _1_2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_82
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_82:
FLD _3
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_88
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_88:
FLD @cant
FSTP a
DisplayString _resultado_esperado__2
newline 1
DisplayFloat a, 2
newline 1
FLD _0b10
FSTP @aux
FLD _1_2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_101
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_101:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_107
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_107:
FLD _1_2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_113
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_113:
FLD _3
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_119
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_119:
FLD @cant
FSTP a
DisplayString _resultado_esperado__1
newline 1
DisplayFloat a, 2
newline 1
FLD _0xF
FSTP @aux
FLD _1_2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_132
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_132:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_138
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_138:
FLD _1_2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_144
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_144:
FLD _15
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_150
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_150:
FLD @cant
FSTP a
DisplayString _resultado_esperado__1
newline 1
DisplayFloat a, 2
newline 1
FLD _2
FLD _4
FMUL
FSTP @aux
FLD _1_2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_165
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_165:
FLD _2
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_171
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_171:
FLD _8
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_177
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_177:
FLD _15
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_183
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_183:
FLD _8
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_189
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_189:
FLD @cant
FSTP a
DisplayString _resultado_esperado__2
newline 1
DisplayFloat a, 2
newline 1
FLD _2
FSTP b
FLD _4
FSTP c
FLD b
FLD c
FDIV
FSTP @aux
FLD _1_2
FLD _0
FSTP @cant
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_208
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_208:
FLD __5
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_214
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_214:
FLD _8
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_220
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_220:
FLD __5
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_226
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_226:
FLD _8
FLD @aux
FXCH
FCOM
FSTSW AX
SAHF
FFREE
JNE _ET_232
FLD @cant
FLD _1
FADD
FSTP @cant
_ET_232:
FLD @cant
FSTP a
DisplayString _resultado_esperado__2
newline 1
DisplayFloat a, 2
newline 1

MOV EAX, 4C00H
INT 21h
END START