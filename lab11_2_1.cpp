#include <iostream>
using namespace std;
int main()
{
    int *a, *b;

    a = new int;
    b = new int;

    *a = 2;
    *b = 6;

    *a = *a * 2;

    cout << "Value of the variable a: " + *a;
    cout << "Value of the variable b: " + *b;

    delete a;
    delete b;
}