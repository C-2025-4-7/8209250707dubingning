#include<iostream>
using namespace std;
void merge(  const int list1[], int size1,   const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];
	}
	for (int j = size1; j < size1 + size2; j++) {
		list3[j] = list2[j - size1];
	}
	for (int i = 0; i < size1 + size2; i++) {
		for (int j = 0; j < size1 + size2 - 1; j++) {
			if (list3[j] > list3[j + 1]) {
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}

}
int main() {
	cout << "Enter list1:";
	int size1, size2;
	cin >> size1;
	int list1[40];
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;

	int list2[40];
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	int list3[80];
	merge(list1, size1, list2, size2, list3);
	cout << "The merge list is: ";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	return 0;
}