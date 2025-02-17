@echo off
setlocal enabledelayedexpansion

:: Tentukan direktori tempat file .cpp berada
set "SOURCE_DIR=D:\wikipedia\Modul 2"

:: Pergi ke direktori sumber
cd /d "%SOURCE_DIR%"

:loop
:: Loop melalui semua file .cpp di folder
for %%f in (*.cpp) do (
    set "cppfile=%%f"
    set "exefile=%%~nf.exe"

    :: Periksa apakah file .exe sudah ada
    if not exist "!exefile!" (
        echo Mengompilasi !cppfile!
        g++ "%%f" -o "!exefile!"
    ) else (
        echo File !exefile! sudah ada, tidak perlu dikompilasi lagi.
    )
)

:: Tunggu beberapa detik sebelum mengecek lagi
timeout /t 5 >nul

:: Ulangi lagi loop
goto loop
