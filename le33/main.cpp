#include <iostream>
using namespace std;

/*�������
* ���������� ������� ������ ���� �� �� ������
*/

void foo()
{
	cout << "� �������, ���� �������!" << endl;
}

int Sum(int a, int b) 
{
	return a + b;
}




/*
������������_�������� ���_������� (���������)
{
	���� ��������������_���� (����);
}
*/

void main() 
{
	setlocale(LC_ALL, "ru");
	foo();

	int c;

	c = Sum(23, 24);

	/*foo();

	for (int i = 0; i < 20; i++)
	{
		foo();
	}*/

}