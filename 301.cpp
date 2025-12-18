#include <iostream>
using namespace std;
int multp(int a, int b) {
	int c;
	c = a > b ? a : b;
	for (int i = c; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			return i;
		}
	}
}
int divi(int a, int b) {
	int e,c;
	c = a > b ? a : b;
	e = a < b ? a : b;
	if (c % e == 0)
		cout << "最大公约数为" << e << endl;
	else {
		for (int i = 0;; i++) {
			int r = c % e;
			c = e;
			e = r;
			if (r == 0) {
				return c;
			}

		}


	}
}
int main() {
	int a, b;
	cin >> a >> b;
	int multp(int, int);
	int divi(int, int);
	cout <<"最小公倍数为"<< multp(a, b)<<endl;
	cout << "最大公约数为" << divi(a, b) << endl;
	return 0;
}