#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char a;
	int hours;

	cout << "Enter package subscription: "; cin >> a;
	cout << "Enter no. of hours used: "; cin >> hours;
	cout << "Monthly bill: ";
	switch (a)
	{
		case 'A':
		case 'a':
			if (hours > 10)
				cout << 995 + (20 * (hours - 10)) << endl;
			else
				cout << "995";
			break;
		case 'B':
		case 'b':
			if (hours > 20)
				cout << 1495 + (10 * (hours - 10)) << endl;
			else
				cout << "1495";
		case 'C':
		case 'c':
			cout << "1995";
	}

	_getch();
	return 0;
}