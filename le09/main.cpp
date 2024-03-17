//инкремент и декремент

#include <iostream>
using namespace std;

void main() 
{
	int a = 1;
	cout << a << endl;
	a = a + 1;
	cout << a << endl;
	a++;
	cout << a << endl;

	// инкремент и декремент имеют две формы: префиксна€ и постфиксна€ - разный приоритет выполнени€ операции

	int d = 1, b;

	b = ++d * d; //получитс€ 4 

}