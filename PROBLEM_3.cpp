#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	double z = 2.5;
	float V;
	cout << setw(10) << fixed;
	cout << setprecision(2) << fixed;
	cout << "The value of x: "; cin >> x;
	cout << "The value of y: "; cin >> y;
	cout << "The value of V is: ";

	if (x == 1 && y > 1 && y < 5)
		cout << x * y * z;
	else if (x == 1 && y >= 5)
		cout << x + (y / z);
	else if (x == 2 && y <= 5)
		cout << abs((x - y) / z);
	else if (x == 2 && y > 5)
		cout << x - (sqrt(y + z));
	else
		cout << x + y + z;




	_getch();
	return 0;
}