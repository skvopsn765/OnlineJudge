#include <iostream>
using namespace std;

int main() {
	int a[10000] = { 0 };
	int L, M;
	cin >> L >> M;
	for (int i = 0; i <= L; i++) {
		a[i] = 1;
	}
	int ax, bx;
	for (int i = 0; i < M; i++) {
		cin >> ax >> bx;
		for (int i = ax; i <= bx; i++) {
			a[i] = 0;
		}
	}
	int num = 0;
	for (int i = 0; i <= L; i++) {
		if (a[i] == 1) num++;
	}
	cout << num << endl;
}