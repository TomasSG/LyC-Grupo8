@echo off

:do_while
echo Creando el archivo lex.yy.c.
flex ./Lexico.l
pause
echo Creando el archivo de byson.
bison -dyv ./Sintactico.y
pause
echo Creando el ejecutable ...
gcc  ./lib/lista_ts.c ./lib/lista_tercetos.c ./lib/pila.c ./lib/lexico.c ./lib/semantico.c ./lib/gci.c ./lib/assembler.c ./lex.yy.c ./y.tab.c -o ./Segunda.exe
pause
cls
echo Ejecutando el Compilador
echo RESULTADOS:
echo -----------------------------------------------------------------
Segunda.exe ./prueba.txt
echo.
echo -----------------------------------------------------------------
pause
del Segunda.exe
del lex.yy.c
del y.output
del y.tab.c
del y.tab.h
cls
set /p seguir=Desea seguir con el programa? [s/n]
if "%seguir%"=="s" goto do_while