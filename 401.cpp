#include<iostream>
using namespace std;
int main() {
	int input[10];
	int distinct[10];
	int diff = 0;
	for (int i = 0; i < 10; i++) {
		cin >> input[i];

	}
	for (int i = 0; i < 10; i++) {
		int num = input[i];
		bool isExist = false;
			for (int j = 0; j < i; j++) {
				if (input[j] == num) {
					isExist = true;
				}
			}
			if (!isExist) {
				distinct[diff] = num;
				diff++;
			}
	}
	cout << "Enter ten number: ";
	for (int i = 0; i < 10; i++) {
		cout << input[i] << "  ";
	}
	cout << "The distinct numbers are:";
	for (int j = 0; j <diff; j++) {
		cout << distinct[j] << "  ";
	}
	return 0;
}