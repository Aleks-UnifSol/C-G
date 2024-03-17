#include <iostream>
using namespace std;

/*функция, прототипы*/

void foo(int a, int b);




void main()
{
	setlocale(LC_ALL, "ru");
	foo(4, 5);
}

void foo(int a, int b)
{
	cout << "Я функция, меня вызвали!" << endl;
}

