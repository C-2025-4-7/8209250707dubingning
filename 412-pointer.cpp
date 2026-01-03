#include<iostream>
using namespace std;
#include<string>
int parseHex(char* hexstr) {
	int a=0;
	a=stoi(hexstr,nullptr,16);
	return a;
}
int main() {
	char a[10];
	cin >> a;
	cout << parseHex(a);
	return 0;
}