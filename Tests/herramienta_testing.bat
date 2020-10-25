@echo off

set /p exe=(Paso 1) Especifique el nombre del archivo para hacer pruebas: 

:inicio
set /p todas=(Paso 2) Desea realizar todas las pruebas? [s/n]
if %todas% == s goto todas
if %todas% == n goto una

:todas
set /p dir=(Paso 3): Especifique el nombre del directorio con los archivos de testing: 
for %%f in (./%dir%/*.txt) do (
	cls
	echo Ejecutando %%f
	echo RESULTADOS:
	echo -----------------------------------------------------------------
	%exe% ./%dir%/%%f
	echo -----------------------------------------------------------------
	pause
)
goto pregunta

:una
set /p arch=(Paso 3) Especifique el nombre del archivo de testing: 
cls
echo Ejecutando test %arch%
echo RESULTADOS:
echo -----------------------------------------------------------------
%exe% %arch%
echo -----------------------------------------------------------------
pause
goto pregunta

:pregunta
cls
set /p seguir=Desea seguir con el programa? [s/n]
if %seguir% == s goto inicio

