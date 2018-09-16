#include <iostream>
using namespace std;

int main() {
	int n;
	int a[100000];
	int bike[10000];
	int walk[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		bike[i] = a[i] / 3 + 50;
		walk[i] = a[i] / 1.2;
		if (bike[i] > walk[i]) cout << "Walk" << endl;
		if (bike[i] < walk[i]) cout << "Bike" << endl;
		if (a[i] == 100) cout << "All" << endl;
	}
}