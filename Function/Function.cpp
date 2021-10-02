// Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{

    /* HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE)
     COORD coord;
     SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MOOE, &coord)*/
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите два чилса: ";
    cin >> a >> b;
    int c = Add(a, b);
    cout << c << endl;
    cout << Sub(a, b) << endl;
    cout << Mul(a, b) << endl;
    cout << Div(a, b) << endl;
}

int Add(int a, int b)
{
    //Addition - Сложение
    int c = a + b;
    return c;
}
int Sub(int a, int b)
{// Subtraction - Вычитание
    return a - b;
}
int Mul(int a, int b)
{// Multiolication
    return a * b;
}
double Div(int a, int b)
{// Division - Деление 
    return (double)a / b;
}

