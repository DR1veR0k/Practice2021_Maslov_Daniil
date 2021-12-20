@ECHO off
chcp 65001 > nul

SET name=%1


md %name%\"Алгебра и Геометрия"
echo Ведякова Анастасия Олеговна > %name%\"Алгебра и геометрия"\readme.txt
echo Начало занятий: %DATE% >> %name%\"Алгебра и геометрия"\readme.txt

md %name%\Матиматический анализ
echo Евстафьева Виктория Викторовна > %name%\Мат.анализ\readme.txt
echo Начало занятий: %DATE% >> %name%\Мат.анализ\readme.txt

md %name%\"Основы программирования"
echo Погожев Сергей Владимирович > %name%\"Основы программирования"\readme.txt
echo Начало занятий: %DATE% >> %name%\"Основы программирования"\readme.txt

md %name%\" Основы дискретной математики"
echo Максимов Алексей Юрьевич > %name%\"Основы дискретной математики"\readme.txt
echo Начало занятий: %DATE% >> %name%\"Основы дискретной математики"\readme.txt

copy /D /Y op.bat %name% 
copy /D /Y algem.bat %name%

cd %name%