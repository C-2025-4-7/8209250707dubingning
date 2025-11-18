#include <iostream>
using namespace std;
int main() {
	int a, b, c, l;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << a + b + c << endl;
		if (a == c || b == c || a == b)cout << "等腰三角形";
	}
	else cout << "无法构成三角形";
	return 0;
}