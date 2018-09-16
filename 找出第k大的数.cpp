#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int N, K;
	cin >> N;
	cin >> K;
	int a[100];
	int temp;
	//輸入數組
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	//冒泡程序
	for (int i = 0; i < N; i++) { 
		for (int j = 1; j < N; j++) {
			if (a[j - 1] > a[j]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	//輸出第K大的數
	cout << a[N - K] << endl;
}