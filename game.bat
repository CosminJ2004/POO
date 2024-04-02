@echo off
cd D:\POO\proiect

:: Compilează fișierele .cpp într-un executabil
g++ -o main.exe main.cpp game.cpp

:: Rulează executabilul
main.exe

:: Pauză pentru a putea citi mesajul de la sfârșitul rulării
pause
