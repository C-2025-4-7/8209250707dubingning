#include<iostream>
using namespace std;
#include<string>
int indexOf(string s1, string s2) {
	int len1 = s1.size();
	int len2 = s2.size();
	if (len1 == 0 || len1 > len2)return -1;
	for (int i = 0; i < len2-len1+1; i++) {/*历遍所有主串中可能的起始位置*/
		int j;
		for ( j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j])break;/*连续相同，否则跳出循环*/
		}
		if (j == len1)/*上一个检验循环完全完成*/return i;
	}
	return -1;
}
int main() {
	string s1, s2;
	cout << "Enter the first string:";
	getline(cin, s1);
	cout << "Enter the second string:";
	getline(cin,s2);
	cout<< "indexOf("<<s1<<","<<s2<<")is " << indexOf(s1, s2);
	
	return 0;

}
