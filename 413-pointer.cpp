#include<iostream>
using namespace std;
void arr(int a[],int n) {
	/*int len = sizeof(a) / sizeof(int);数组退化成指针，计算不出数组大小*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			int tem;
			if (a[j] > a[j + 1]) {
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	}
}
int main() {
	int* dm;
	int a;
	cout << "请输入数组个数：";
	cin >> a;
	dm = new int[a];
	for (int i = 0; i < a;i++) {
		cin >> dm[i];

	}
	arr(dm,a);
	for (int i = 0; i < a; i++) {
		cout << dm[i] << "\t";
	}
	delete[] dm;
	return 0;
}