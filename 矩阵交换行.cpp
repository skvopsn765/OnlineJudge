#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a[5][5] = { 0 };
	int tem[5][5] = { 0 };
	int i, j;
	int row1, row2;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	cin >> row1 >> row2;
	if (row1 >= 0 && row1 <= 4 && row2 >= 0 && row2 <= 4) {
		for (j = 0; j < 5; j++) {
			tem[row1][j] = a[row1][j];
			a[row1][j] = a[row2][j];
			a[row2][j] = tem[row1][j];
		}
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				cout << setw(4) << a[i][j];
			}
			cout << endl;
		}
	}
	else cout << "error" << endl;
}