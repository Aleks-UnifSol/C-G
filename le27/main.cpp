#include <iostream>
using namespace std;

/*Массивы*/

void main()
{
	setlocale(LC_ALL, "ru");
	const int кSize = 5; // константа потому, что мы не сможем случайно переопределить SIZE по ходу программы - соответсвенно массив не поломается

	int arr[кSize]; //статический массив

	for (int i = 0; i < кSize; i++) //заполнение массива
	{
		arr[i] = i;
	}

	for (int i = 0; i < кSize; i++) // вывод массива на экран 
	{
		cout << arr[i] << endl;
	}


}