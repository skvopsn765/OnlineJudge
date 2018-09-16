#include <iostream>
using namespace std;

int main() {
	int n, k;
	int a[1000];
	int sum = 0;
	cin >> n >>k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (sum == k) break;
		for (int j = 1; j < n; j++) {
			sum = a[i] + a[j];
			if (sum == k) break;
		}
	}
	if (sum == k) cout << "yes" << endl;
	else cout << "no" << endl;
}