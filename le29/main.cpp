#include <iostream>
#include <ctime>

using namespace std;
/*Генератор случайных чисел*/


void main()
{
	setlocale(LC_ALL, "ru");

	//time(0); //время в секундах от 1 января 1970 года

	srand(time(NULL));


	int a = rand() % 10 + 5;

	cout << a << endl;

	a = rand() % 10 + 5;

	cout << a << endl;

	//массив на 10 элементов

	int const SIZE = 10;

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}



}