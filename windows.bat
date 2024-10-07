@echo off

set dir=%~dp0

cd %dir% && gcc ./main.c -o main.exe

if %errorlevel% equ 0 (
    cls && start cmd /k main.exe --asdaa
    exit 0
) else (
    echo Erro ao compilar o programa.
    pause
    exit 1
)