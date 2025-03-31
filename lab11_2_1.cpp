#include <iostream>
using namespace std;
int main()
{
    int *a, *b;

    a = new int;
    b = new int;
    cout << "Enter value of a: ";
    cin >> *a;
    cout << "Enter value of b: ";
    cin >> *b;

    *a = *a / 2;

    cout << "Value of the variable a: " << *a << endl;
    cout << "Value of the variable b: " << *b << endl;

    delete a;
    delete b;
}
