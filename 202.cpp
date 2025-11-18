#include <iostream>
using namespace std;
int main() {
	double x;
	double y;
	cin >> x;
	if (x > 0 && x < 1)y = 3 - 2*x;
	else if (x < 5)y = 1 / x + 1;
	else if (x < 10 && x >= 5)y = x * x;
	cout << y;
	return 0;
}