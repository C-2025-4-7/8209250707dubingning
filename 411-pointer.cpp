#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int indexOf(const char* s1, const char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0 || len1 > len2)return -1;
	
	for (int i = 0; i <len2 - len1+1; i++) {/*历遍所有主串中可能的起始位置*/
		int j;
		for (j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j])break;/*连续相同，否则跳出循环*/
		}
		if (j == len1)/*上一个检验循环完全完成*/return i;
	}
	return -1;
}
int main() {
	char s1[100];
	char s2[100];
	string s3, s4;
	cout << "Enter the first string:";
	getline(cin, s3);
	strcpy_s(s1, sizeof(s1), s3.c_str());
	/*strcpy_s是微软特供安全拷贝版本，不存在溢出风险*/
	cout << "Enter the second string:";
	getline(cin, s4);
	strcpy_s(s2, sizeof(s2), s4.c_str());
	cout << "indexOf(" << s1 << "," << s2 << ")is " << indexOf(s1, s2);

	return 0;
}