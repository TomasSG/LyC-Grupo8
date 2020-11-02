@echo off

:do_while
echo Creando el archivo lex.yy.c.
C:\GnuWin32\bin\flex C:\Users\Ariana\Desktop\LyC-Grupo8-master\Grupo8\Lexico.l
pause
echo Creando el archivo de byson.
C:\GnuWin32\bin\bison -dyv C:\Users\Ariana\Desktop\LyC-Grupo8-master\Grupo8\Sintactico.y
pause
echo Creando el ejecutable ...
C:\MinGW\bin\gcc.exe  C:\Users\Ariana\Desktop\LyC-Grupo8-master\Grupo8\lib\lista.c C:\Users\Ariana\Desktop\LyC-Grupo8-master\Grupo8\lib\utilitarias.c lex.yy.c y.tab.c -o Primera.exe
pause
cls
echo Ejecutando el Analizador Lexicografico
echo RESULTADOS:
echo -----------------------------------------------------------------
Primera.exe prueba.txt
echo.
echo -----------------------------------------------------------------
pause
del lex.yy.c
del Primera.exe
del y.output
del y.tab.c
del y.tab.h
cls
set /p seguir=Desea seguir con el programa? [s/n]
if "%seguir%"=="s" goto do_while