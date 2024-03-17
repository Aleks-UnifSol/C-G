#include <iostream>
using namespace std;

/*‘ункции
* ќбъ€вление функции должно быть до ее вызова
*/

void foo()
{
	cout << "я функци€, мен€ вызвали!" << endl;
}

int Sum(int a, int b) 
{
	return a + b;
}




/*
возвращаемое_значение им€_функции (параметры)
{
	блок повтор€ющегос€_кода (тело);
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