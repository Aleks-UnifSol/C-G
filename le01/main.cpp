#include<iostream>
using namespace std;

/*..
\b �������� ���������� ����������� �������
\n ������� �� ������ ����� ������
\t ������� � ��������� ������� ���������

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

\\ ������� �������� �����  \
\" ������� ������� ������� "
\' ������� ��������� ������� '

.*/

void main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "������!" << endl;

	// ���_������ ���_����������
	
	int a;
	a = 3;

	int b = 5;

	cout << a << endl;
	a = 10;
	cout << a << endl;

	const int COUNT_DAYS_IN_WEEK = 7;

	cout << COUNT_DAYS_IN_WEEK << endl;

	const char NEW_LINE = '\n';

	cout << COUNT_DAYS_IN_WEEK << NEW_LINE << endl;

	int Var, Var2;

	cout << "������� ������ �����: ";
	cin >> Var;
	
	cout << "������� ������ �����: ";
	cin >> Var2;

	cout << "����� 1 = " << Var << endl << "����� 2 = " << Var2 << endl;

	int c, d;

	cout << "������� ��� ��� �����" << endl;

	cin >> c >> d;

	cout << "����� 1 = " << c << endl << "����� 2 = " << d << endl;

	// �������������� �������� � �������

	//�������
	int f = 5;
	cout << a << endl;
	a = -a;


	//��������

	int y = 5, u = 2, s,n;

	s = y + u;

	cout << s;
	
	// ���������� 

	n = 2 + 2 * 2;

	cout << n;
}





