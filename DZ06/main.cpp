#include <iostream>
using namespace std;

/*��������� �����*/

void main() 
{
	setlocale(LC_ALL, "ru");
	int height, width;
	cout << "������� ������ ��������������" << endl;
	cin >> height;

	cout << "������� ������ ��������������" << endl;
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