//描述
//有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）
//将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
//输入
//输入包括若干行，每一行为一组测试数据，格式为
//str substr
//输出
//对于每一组测试数据，输出插入之后的字符串。
//样例输入
//abcab eee
//12343 555
//样例输出
//abceeeab
//12345553

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	char str[11] = { 0 };
	char substr[4] = { 0 };
	char mix[14] = { 0 };
	int maxN = 0;
	int strL = 0;
	int substrL = 0;
	while (cin >> str >> substr) {
		//找出最大值
		int max = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] > max) {
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
