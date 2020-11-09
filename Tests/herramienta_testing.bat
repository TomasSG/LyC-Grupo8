@echo off

set /p exe=(Paso 1) Especifique el nombre del archivo para hacer pruebas: 

:inicio

set /p dir=(Paso 2): Especifique el nombre del directorio con los archivos de testing: 
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

:pregunta
cls
set /p seguir=Desea seguir con el programa? [s/n]
if %seguir% == s goto inicio

