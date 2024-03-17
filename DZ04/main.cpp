#include <iostream>
using namespace std;

/*Разработать программу, которая выводит на экран линию из символов.
Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
*/

void main() 
{
	setlocale(LC_ALL, "ru");

	int symbolCount;
	char sybol;
	int lineType;
	int index = 0;

	cout << "Введите количество символов в линии" << endl;
	cin >> symbolCount;

	cout << "Введите символ" << endl;
	cin >> sybol;

	cout << "Выберите тип линий" << endl
		<< "1 - вертикальная линия" << endl
		<< "2 - горизонтальная линия" << endl;
	cin >> lineType;

	
	while (index < symbolCount)
	{
		if (lineType == 1)
		{
			cout << symbol << endl;
		}
		if (lineType == 2)
		{

		}
		cout << sybol;
		index++;
	}

	cout << endl << endl;


}