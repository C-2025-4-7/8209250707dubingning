#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		for (int q = 1; q <= 5; q++) {
			if (q <= 5 - i)cout << " ";
			else cout << "*";
			
		}
		cout << endl;
	}

	return 0;
}