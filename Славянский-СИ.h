#pragma once


#include<stdio.h>
#include <windows.h>
#include <locale.h>
#include <wchar.h>

void initConsole() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
}
void printRus(wchar_t string[]) {
    wprintf(string);
}

// типы данных
#define число int
#define число_с_точкой float
#define двоичное bool
#define всегда_больше_0 unsigned

// массивы

// ввод и вывод
#define изречь printf
#define Л L
#define выслушать scanf_s

#define мать_функция main
#define дать return

#define число_бы_мне "%d"
#define число_для_ответа "%d"
#define использовать_древнеславянский_язык initConsole();
#define захватить using
#define крепость namespace
#define обычную std;


// Циклы
#define по_кругу for

#define делать do
#define покуда while

// математические операции //
#define равняется =
#define равняются =
#define сложить +
#define убрать -
#define перемножить *
#define делить /
// math //

#define корень() sqrt()

#define ежели if
#define не_то else

#define чело void