

#include <iostream>
using namespace std;

int main()
{
	int a ;
	int b ;
	int c ;
	cin >> a;
	cin >> b;
	cin >> c;
	
	int d = b * b - 4 * a * c;


	if (d == 0) { cout << 1; }
	else
	{
		cout << 2;
	}
}

