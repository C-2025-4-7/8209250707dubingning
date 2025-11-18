#include <iostream>
using namespace std;
int main() {
	char a;
	int b;
	cin >> a;
	b = (int)a;
	b <= 122 && b >= 97 ? cout << char(b - 32) : cout << b;
	return 0;
}