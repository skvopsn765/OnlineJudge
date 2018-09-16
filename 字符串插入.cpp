#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char str[11] = { 0 };
	char substr[4] = { 0 };
	
	while (cin >> str >> substr) {
		char mix[14] = { 0 };
		int maxN = 0;
		int strL = 0;
		int substrL = 0;
		int max = 0;
		
		//找出最大值
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] > max) {
				max=str[i];
				maxN = i;
			}
		}
		//字符串長度函數，需搭配#include <cstring>使用;
		strL = strlen(str);
		substrL = strlen(substr);

		//結合兩個字符串;
		for (int i = 0; i < strL; i++) {
			mix[i] = str[i];
		}
		for (int i = 0; i < substrL; i++) {
			mix[i + strL] = substr[i];
		}
		
		//最大字母後的字母往後移
		for (int j = 0; j < (strL - maxN - 1); j++) {
			for (int i = maxN + 1; mix[i + 1] != '\0'; i++) {

				int temp = mix[i];
				mix[i] = mix[i + 1];
				mix[i + 1] = temp;
			}
		}
		cout << mix << endl;
	}
}