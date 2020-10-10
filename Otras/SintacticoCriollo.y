S=<Programa>
<Programa>		    --> <Bloque><Programa>
<Programa>		    --> <Bloque>
<Bloque>		      --> <Bloque><Sentencia>
<Bloque>		      --> <Sentencia>

<Sentencia>		    --> <Asignacion> PUNTO_COMA
<Sentencia>       --> <Declaracion> PUNTO_COMA
<Sentencia>       --> <Salida> PUNTO_COMA
<Sentencia>       --> <Entrada> PUNTO_COMA
<Sentencia>       --> <BloqueWHILE>
<Sentencia>       --> <BloqueIF>

/* REGLAS PARA LA ASIGNACION */
<Asignacion>      --> ID OP_ASIGNACION <Cuenta>
<Cuenta>          --> <Termino> OP_SUMA <Cuenta>
<Cuenta>          --> <Termino> OP_RESTA <Cuenta>
<Cuenta>          --> <Termino>
<Termino>         --> PAR_ABIERTO <Cuenta> PAR_CERRADO
<Termino>         --> <Factor> OP_MULT <Termino>
<Termino>         --> <Factor> OP_DIVISION <Termino>
<Termino>         --> <Factor>
<Termino>         --> <Cuenta>                                 //REVISAR
<Factor>          --> ID|CTE|CONST_BINARIA|CONST_HEXA
<Factor>          --> <FuncionContar>

/* REGLAS PARA LA DECLARACION DE VARIABLES */
<Declaracion>     --> DIM <ListaVariables> AS <ListaTipos>
<ListaVariables>  --> OP_LE <Variables> OP_GE
<Variables>       --> ID COMA <Variables>
<Variables>       --> ID
<ListaTipos>      --> OP_LE <Tipos> OP_GE
<Tipos>           --> <TipoDeDato> COMA <Tipos>
<Tipos>           --> <TipoDeDato>
<TipoDeDato>      --> FLOAT|INTEGER|STRING

/* REGLAS PARA LA DECLARACION DE WHILE E IF */
<BloqueWHILE>     --> WHILE PAR_ABIERTO <Condicion> PAR_CERRADO LLAVE_ABIERTO <Bloque> LLAVE_CERRADO
<BloqueWHILE>     --> WHILE <Condicion> <sentencia>

/* LAS REGLAS BloqueIF SON UNA POR CADA COMBINACION, DONDE NO HAY ELSE, DONDE SI HAY, DONDE SE USAN LLAVES, DONDE NO SE USAN*/
<BloqueIF>        --> IF PAR_ABIERTO <Condicion> PAR_CERRADO LLAVE_ABIERTO <Bloque> LLAVE_CERRADO
<BloqueIF>        --> IF <Condicion> <Sentencia>
<BloqueIF>        --> IF PAR_ABIERTO <Condicion> PAR_CERRADO LLAVE_ABIERTO <Bloque> LLAVE_CERRADO ELSE LLAVE_ABIERTO <Bloque> LLAVE CERRADO
<BloqueIF>        --> IF <Condicion> <Sentencia> ELSE LLAVE_ABIERTO <Bloque> LLAVE CERRADO
<BloqueIF>        --> IF PAR_ABIERTO <Condicion> PAR_CERRADO LLAVE_ABIERTO <Bloque> LLAVE_CERRADO ELSE <Sentencia>
<BloqueIF>        --> IF <Condicion> <Sentencia> ELSE <Sentencia>

<Condicion>       --> <ExpLogica> AND <Condicion>
<Condicion>       --> <ExpLogica> OR <Condicion>
<Condicion>       --> <ExpLogica>
<ExpLogica>       --> PAR_ABIERTO <Condicion> PAR_CERRADO
<ExpLogica>       --> <Cuenta> <Comparador> <Cuenta>
<Comparador>      --> OP_IGUAL|OP_DISTINTO|OP_LE|OP_LEQ|OP_GE|OP_GEQ|OP_NE

/* REGLAS PARA PUT Y GET */
<Salida>          --> PUT ID
<Salida>          --> PUT CONST_STRING
<Entrada>         --> GET ID

/* REGLAS PARA CONTAR */
<FuncionContar>   --> CONTAR PAR_ABIERTO <Cuenta> PUNTO_COMA <ListaFactores> PAR_CERRADO
<ListaFactores>   --> COR_ABIERTO <Factores> COR_CERRADO
<Factores>        --> <Factor> COMA <Factores>
<Factores>        --> <Factor>
