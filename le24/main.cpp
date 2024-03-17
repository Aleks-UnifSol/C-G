#include <iostream>
using namespace std;

/*Вложенные циклы*/


void main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 1; i < 5; i++)  //за одну итерацию первого цикла у нас пройдет несколько итераций второго цикла
	{
		cout << "сработал 1й цикл for итерация № " << i << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tсработал 2й цикл for итерация № " << j << endl;
		}
	}
}