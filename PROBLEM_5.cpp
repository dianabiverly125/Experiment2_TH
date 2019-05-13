#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	int b = 0;
	int c = 1;
	int d;
	cout << "Fibonacci Numbers: \n";
	for (a = 0; a <= 19; a++)
	{
		if (a == 0)
			cout << b << ", ";

		if (a == 1)
			cout << c << ", ";
		d = b + c;
		b = c;
		c = d;
		cout << d << ", ";


	}


	_getch();
	return 0;
}