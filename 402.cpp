#include<iostream>
using namespace std;
int main() {
	double a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {//外层确定循环次数
		for (int j = 0; j < 9; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}

		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << '\t';
	}
}