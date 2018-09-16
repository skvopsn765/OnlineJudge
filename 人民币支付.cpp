#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int n, a, b, c;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n1=0;
	cin >> n;
	a = n / 100;
	b = n / 10 - a * 10;
	c = n - a * 100 - b * 10;

	n100 = a;
	n50 = b / 5;
	n20 = b % 5 / 2;
	n10 = b % 5 % 2;
	n5 = c / 5;
	n1 = c % 5;


	cout << n100 << endl;
	cout << n50 << endl;
	cout << n20 << endl;
	cout << n10 << endl;
	cout << n5 << endl;
	cout << n1 << endl;
}