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

// ���� ������
#define ����� int
#define �����_�_������ float
#define �������� bool
#define ������_������_0 unsigned

// �������

// ���� � �����
#define ������ printf
#define � L
#define ��������� scanf_s

#define ����_������� main
#define ���� return

#define �����_��_��� "%d"
#define �����_���_������ "%d"
#define ������������_����������������_���� initConsole();
#define ��������� using
#define �������� namespace
#define ������� std;


// �����
#define ��_����� for

#define ������ do
#define ������ while

// �������������� �������� //
#define ��������� =
#define ��������� =
#define ������� +
#define ������ -
#define ����������� *
#define ������ /
// math //

#define ������() sqrt()

#define ����� if
#define ��_�� else

#define ���� void