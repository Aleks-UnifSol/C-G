#include <iostream>
using namespace std;

/*sizeof*/

void main()
{
	setlocale(LC_ALL, "ru");


	const int kSize = 10;

	int arr[]{ 5, 33, 545, 11, 3456, 234566 };

	cout << sizeof(arr) / sizeof(int) << endl;

	int a = sizeof(arr);
	int b = sizeof(int);

	/*for (int i = 0; i < 4; i++)
	{
		arr[i] = i;
	}*/


	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << endl;;
	}


	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;;
	}

}