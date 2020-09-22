@echo off

:do_while
echo Creando el archivo lex.yy.c.
c:\GnuWin32\bin\flex Lexico.l
pause
echo Creando el ejecutable ...
c:\MinGW\bin\gcc.exe lex.yy.c -o Primera.exe
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
cls
set /p seguir=Desea seguir con el programa? [s/n]
if "%seguir%"=="s" goto do_while