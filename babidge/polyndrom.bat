@echo off

set a=%1
if "%a%"=="" (goto :na)
:loop
if "%a%"=="" (goto :yes)
if not "%a:~0,1%"=="%a:~-1%" (goto :no)
set a=%a:~1,-1%
goto :loop

:yes
echo yes
exit /b

:no
echo no
exit /b

:na
echo no word entered