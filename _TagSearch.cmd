@echo off

:init
echo=
echo=^| Tag搜尋器

:order
set /p order=^| #
echo=

:search
findstr /m /s #%order% %cd%\*.c

if not "%errorlevel%"=="0" (
    echo 沒有符合條件的檔案。
)
echo=

goto order