#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a[100][100] = { 0 };
	int i, j, n;
	cin >> n;
	int n1, n2, n3, n4;
	int num = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			n1 = a[i + 1][j] - a[i][j];
			n2 = a[i - 1][j] - a[i][j];
			n3 = a[i][j + 1] - a[i][j];
			n4 = a[i][j - 1] - a[i][j];
			if (n1 >= 50 && n2 >= 50 && n3 >= 50 && n4 >= 50) num++;
		}
	}
	cout << num << endl;
}