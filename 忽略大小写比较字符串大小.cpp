#include<iostream>
using namespace std;
int main() {
	char a[80];
	char b[80];
	cin.getline(a, 80);
	cin.getline(b, 80);
	char c = { 0 };
	//a[i]與b[i]其中一個不等於\0，循環繼續；反之a[i]且b[i]都等於\0，則停止循環
	for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
		if (a[i] >= 97 && a[i] <= 122) a[i] -= 32;
		if (b[i] >= 97 && b[i] <= 122) b[i] -= 32;
		if (a[i] > b[i]) c = '>';
		if (a[i] < b[i]) c = '<';
		if (a[i] == b[i]) c = '=';
		if (c == '>' || c == '<') break;
	}
	cout << c << endl;
}