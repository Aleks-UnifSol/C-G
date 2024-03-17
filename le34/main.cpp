#include <iostream>
using namespace std;

/*функция, передача аргументов (параметров)*/

int Foo(int a) 
{
	return ++a; // делать нужно постфикстный инкремент потому что наименьший приоритет
}

void main()
{
	setlocale(LC_ALL, "ru");

	int val = 1;

	val =  Foo(val);
	cout << val << endl;
}