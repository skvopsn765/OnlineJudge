#include <iostream>
using namespace std;

int main() {
	int a[15000] = { 0 };
	int n = 0;
	while (cin >> n) {
		if (n == 0) break;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 1; j < n - i; j++) {
				if (a[j - 1] > a[j]) {
					int temp = a[j];
					a[j] = a[j - 1];
					a[j - 1] = temp;
				}
			}
		}
		if (n % 2 == 0) {
			cout << (a[n / 2] + a[n / 2 - 1]) / 2 << endl;
		}
		else {
			cout << a[n / 2] << endl;
		}
	}
}