#include <iostream>
#include <ctime>

using namespace std;
/*��������� ��������� �����*/


void main()
{
	setlocale(LC_ALL, "ru");

	//time(0); //����� � �������� �� 1 ������ 1970 ����

	srand(time(NULL));


	int a = rand() % 10 + 5;

	cout << a << endl;

	a = rand() % 10 + 5;

	cout << a << endl;

	//������ �� 10 ���������

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