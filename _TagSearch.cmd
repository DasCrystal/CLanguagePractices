@echo off

:init
echo=
echo=^| Tag�j�M��

:order
set /p order=^| #
echo=

:search
findstr /m /s #%order% %cd%\*.c

if not "%errorlevel%"=="0" (
    echo �S���ŦX�����ɮסC
)
echo=

goto order