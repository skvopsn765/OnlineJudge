#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double x[100] = { 0 };
	double y[100] = { 0 };
	double dis = 0;
	int n = 0;
	cin >> n;
	if (n >= 2) {
		for (int i = 0; i < n; i++) {
			cin >> x[i] >> y[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) break;
				else {
					double tep = sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
					if (tep > dis) dis = tep;
				}
			}
		}
		cout << dis << endl;

	}
	else
	return 0;
}