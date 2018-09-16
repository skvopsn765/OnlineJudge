#include <iostream>
using namespace std;

int main() {
	float N;
	float K;
	while (cin >> N >> K) {
		if (N<10 || N>50 || K<1 || K>20) break;
		float sum = N;
		float price = 200;
		int year = 1;
		while (sum < price) {
			sum += N;
			year++;
			price = price * (1 + 0.01*K);
			if (price * 0.01*K > N) break;
		}
		if (sum < price) {
			cout << "Impossible" << endl;
		}
		else {
			cout << year << endl;
		}
	}
}