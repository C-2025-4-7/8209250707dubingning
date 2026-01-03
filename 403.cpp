#include<iostream>
using namespace std;
int main() {
	bool ifopen[100] = { 0 };
	for (int i = 1; i <=100; i++) {
		int sum = 100 / i;
		for (int j = i; j <= sum; j += i) {
			ifopen[j - 1] = !ifopen[j - 1];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (ifopen[i] == 1) cout << i+1 << " ";
	}
	return 0;
}