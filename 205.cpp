#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main() {
	string a;//创建字符串组
	getline(cin, a);//可识别“ ”
	int len = a.length();//计算字符串长度
	int c=0, s=0, num=0;
	for (int i = 0; i < len; i++) {
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
			c++;
		else if (a[i] >= '0' && a[i] <= '9')
			num++;
		else if (a[i] == ' ')
			s++;
	}
	cout << c << endl << s << endl << num;
	return 0;
}