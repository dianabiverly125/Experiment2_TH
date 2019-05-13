#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Enter a number: "; cin >> a;
	if (a > 0)
		cout << "The sum of all whole numbers from 1 to " << a << " is: " << (a * (a + 1)) / 2;
	else
		cout << "Thank You!";




	_getch();
	return 0;
}