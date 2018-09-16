#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a[100] = { 0 };
	int n = 0;
	int m = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	m = m % n;
	while (m--)
	{
		int t = a[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = t;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
	
}