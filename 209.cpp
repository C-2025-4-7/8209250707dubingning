#include <iostream>
using namespace std;
int main() {
	const int cost = 0.8;
	int a0 = 2,top=100,i=0;
	while (top > 0) {
		top -= a0 * 0.8;
		a0++;
		i++;

	}
	cout << double(100) / i;
	return 0;
}