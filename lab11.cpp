// lab11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a value in integer variable a: ";
    cin >> a;
    cout << "Enter a value in integer variable b:";
    cin >> b;

    int* pa, * pb;
    pa = &a;
    pb = &b;

    *pa = *pa * 2;

    int* tempa;

    *tempa = *pa;

    *pa = *pb;
    *pb = *tempa;

    cout << "Value of the variable a: " + *pa;
    cout << "Value of the variable b: " + *pb;
}

