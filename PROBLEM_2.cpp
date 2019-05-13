#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int previous , present;
	int balance;
	cout << "Previous reading: "; cin >> previous; 
	cout << previous << " gal \n";
	cout << "Present reading: "; cin >> present; 
	cout << present << " gal \n";
	cout << "Water consumption: " << (present - previous) << " gal \n";
	cout << "Unpaid balance: "; cin >> balance;
	cout << "Water bill: ";
	if (balance > 0)
		cout << 35 + (1.10 * (present - previous)) + 20 << endl;
	else
		cout << 35 + (1.10 * (present - previous)) << endl;
		

	_getch();
	return 0;
}