#include <iostream>
using namespace std;

int main()
{
	int _number;
	int a, b, c;
	cin >> _number;
	a = _number / 100;
	b = _number / 10 - a * 10;
	c = _number - b * 10 - a * 100;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	
}