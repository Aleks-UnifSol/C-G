#include<iostream>
using namespace std;

/*..
\b Удаление последнего выведенного символа
\n Перейти на начало новой строки
\t Перейти к следующей позиции тфбуляции

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

\\ Вывести обратную черту  \
\" Вывести двойную кавычку "
\' Вывести одинарную кавычку '

.*/

void main() 
{
	setlocale(LC_ALL, "Rus");
	cout << "Привет!" << endl;

	// тип_данных имя_переменной
	
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

	cout << "Введите первое число: ";
	cin >> Var;
	
	cout << "Введите второе число: ";
	cin >> Var2;

	cout << "Число 1 = " << Var << endl << "Число 2 = " << Var2 << endl;

	int c, d;

	cout << "Введите еще два числа" << endl;

	cin >> c >> d;

	cout << "Число 1 = " << c << endl << "Число 2 = " << d << endl;

	// Арифметические операции с числами

	//Унарные
	int f = 5;
	cout << a << endl;
	a = -a;


	//Бинарные

	int y = 5, u = 2, s,n;

	s = y + u;

	cout << s;
	
	// приоритеты 

	n = 2 + 2 * 2;

	cout << n;
}





