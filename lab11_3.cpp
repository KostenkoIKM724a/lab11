#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*
Створити динамічний масив, використовуючи покажчики.
Задано одновимірний масив а[n].
Знайти кількість, індекси й добуток елементів масиву, менших за 1.
*/
int main()
{
	srand(time(0));
	int n, i;
	float numberProduct = 1;
	int count = 0;
	cout << "Please enter a size of an array: ";
	cin >> n;

	float* arrayElements = new float[n];

	for (int i = 0; i < n; i++)
	{
		arrayElements[i] = ((static_cast<float>(rand()) / RAND_MAX) * 10) - 2;
	}

	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(2) << arrayElements[i] << " ";
	}
	cout << endl;

	for (i = 0; i < n; i++) 
	{
		if (arrayElements[i] < 1)
		{
			count += 1;
			numberProduct *= arrayElements[i];
			cout << "Index of number " << fixed << setprecision(2) << arrayElements[i] << " is " << i << endl;
		}
	}

	cout << "The quantity of numbers less than 1 is: " << count << endl;

	if (count > 0) 
	{
		cout << "The product of numbers less than 1 is: " << fixed << setprecision(2) << numberProduct << endl;
	}
	else 
	{
		cout << "No numbers less than 1 found." << endl;
	}
	
	delete[] arrayElements;
}

