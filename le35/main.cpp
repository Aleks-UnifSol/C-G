#include <iostream>
using namespace std;

/*�������, �������� ���������� (����������)*/

void FillArray(int arr[], const int size) //������� ���������� ������� 
{
	int a = sizeof(arr);
	for (int i = 0; i < size; i++)
	{

		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}


void main()
{
	setlocale(LC_ALL, "ru");

	const int kSize = 10;

	int arr[kSize];
	// ����� ����� ������ �� ���������� �� �������� � �������, � ���������� ��������� �� ������

	int a = sizeof(arr);
	FillArray(arr, kSize);

	PrintArray(arr, kSize);

}

