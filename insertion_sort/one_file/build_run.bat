@echo off
chcp 1251 > log
del log

set MAIN=insertion_sort.cpp
set EXE=insertion_sort.exe
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"

if exist %EXE% del %EXE%

g++ "%CHARSET%" %MAIN% -o %EXE%

%EXE%
