#include <iostream>
using namespace std;

/*Вложенные циклы*/

void main() 
{
	setlocale(LC_ALL, "ru");
	int height, width;
	cout << "Введите высоту прямоугольника" << endl;
	cin >> height;

	cout << "Введите ширину прямоугольника" << endl;
	cin >> width;
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

}