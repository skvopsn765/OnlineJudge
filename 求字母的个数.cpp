#include<iostream>
using namespace std;
int main() {
	char a[200];
	while (cin.getline(a, 200)) {
	int an = 0, en = 0, in = 0, on = 0, un = 0;
	for (int g = 0; g < 200; g++) {
		if (a[g] == 'a') an += 1;
		else if (a[g] == 'e') en += 1;
		else if (a[g] == 'i') in += 1;
		else if (a[g] == 'o') on += 1;
		else if (a[g] == 'u') un += 1;
		else if (a[g] == '\0') break;
	}
	cout << an << " " << en << " " << in << " " << on << " " << un << endl;
	}
}