#include <iostream>
using namespace std;

/*�������*/

void main()
{
	setlocale(LC_ALL, "ru");
	const int �Size = 5; // ��������� ������, ��� �� �� ������ �������� �������������� SIZE �� ���� ��������� - ������������� ������ �� ����������

	int arr[�Size]; //����������� ������

	for (int i = 0; i < �Size; i++) //���������� �������
	{
		arr[i] = i;
	}

	for (int i = 0; i < �Size; i++) // ����� ������� �� ����� 
	{
		cout << arr[i] << endl;
	}


}