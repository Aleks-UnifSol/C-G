#include <iostream>
using namespace std;

/*�������, ���������*/

void foo(int a, int b);




void main()
{
	setlocale(LC_ALL, "ru");
	foo(4, 5);
}

void foo(int a, int b)
{
	cout << "� �������, ���� �������!" << endl;
}

