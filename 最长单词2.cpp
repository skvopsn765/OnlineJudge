#include <iostream>
using namespace std;

int main() {
	char s[100];
	char word[100] = { 0 };
	while (cin.getline(s, 100)) {

	int i = 0;
	int j = 0; 
	int maxword = 0;
	for ( i = 0; i < 100; i++) {  
		if (s[i] == ' ') { //第一種狀況，單字後面遇到空白
			if (j > maxword) { //判別是否為最大字母數
				maxword = j;
				for (int k = 0; k < j; k++) {
					word[k] = s[i - j + k];
				}
			}
			j = 0; //重新開始數字母
		}
		else if (s[i] == '.') { //第一種狀況，單字後面遇到.
			if (j > maxword) { //判別是否為最大字母數
				for (int k = 0; k < j; k++) { 
					word[k] = s[i - j + k];
				}
				//.就是句尾了，不用重新開始數字母
			}
		}
		else j++; //若沒遇到上述兩種情況，表示還在數字母
	}

	cout << word << endl;
	}
}