#include <iostream>
using namespace std;

int main() {
	int n;
	int num = 10;
	int g, k;
	int temp;
	cin >> n;
	for (int i = 0; i < n-10; i++) {
		g = num / 10;
		k = num - g * 10;
		temp = num % (g + k);
		if (temp == 0) cout << num << endl;
		num++;
	}
}