#include<iostream>
using namespace std;
int peach(int day) {
	if (day == 10)return 1;
	return(peach(day + 1) + 1) * 2;
}
int main() {
	int a = 1;
	for (int i = 1; i < 10; i++) {

		a = (a + 1) * 2;
	}
	cout << "猴子第一天摘了" << peach(1)<< "个桃子";
}