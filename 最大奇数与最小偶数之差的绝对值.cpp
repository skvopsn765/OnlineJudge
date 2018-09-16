#include <iostream>
using namespace std;

int main()
{
	int a[6];
	int n=6, i=0;
	int _mineven=100;
	int _maxodd=1;
	int result;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		//同時為偶數且小於最小偶數
		if ((a[i] % 2 == 0) && (a[i] < _mineven)) {
			_mineven = a[i];
		}
		//同時為奇數且大於最大奇數
		if ((a[i] % 2 != 0) && (a[i] > _maxodd)) {
			_maxodd = a[i];
		}
	}
	//求出相減之絕對值
	if (_mineven > _maxodd) {
		result = _mineven - _maxodd;
	}
	else {
		result = _maxodd - _mineven;
	}
	cout << result << endl;
	
}