#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	//int num, count[10] = { 0 };
	//for (int i = 0; i < 20; i++) {
	//	cin >> num;
	//	count[num]++;
	//}
	//for (int i = 0; i < 10; i++) {
	//	if (count[i] != 0) {
	//		cout << i << "輸入了" << count[i] << "次" << endl;
	//	}
	//}
	//return 0;
	int a[100] = { 0 };
	int n = 0;
	int _1to18 = 0, rate_1to18 = 0;
	int _19to35 = 0;
	int _36to60 = 0;
	int _over60 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0 && a[i] <= 18) _1to18++;
		if (a[i] > 18 && a[i] <= 35) _19to35++;
		if (a[i] > 35 && a[i] <= 60) _36to60++;
		if (a[i] > 60) _over60++;
	}

	cout << "1-18: " << fixed << setprecision(2) << (float)_1to18 / n * 100 << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << (float)_19to35 / n * 100 << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << (float)_36to60 / n * 100 << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << (float)_over60 / n * 100 << "%" << endl;
}