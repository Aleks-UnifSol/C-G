#include <iostream>
using namespace std;

/*Массивы*/

void main()
{
	setlocale(LC_ALL, "ru");

	//тип_данных имя [количество элементов];
	int arr[4]{};
	arr[0] = 5;
	arr[1] = 7;
	arr[2] = 10;
	arr[3] = 333;

	cout << arr[0] << endl;
}