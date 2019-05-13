#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int n;
	cout << "Counting... \n";
	n = 1;
	for (;n <= 30; n++)
	{
		if (n > 10)
			n = (n + 1);
			cout << n << ", ";

	}
	

	cout << endl;
	

	_getch();
	return 0;
}