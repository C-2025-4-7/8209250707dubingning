#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double a1, a2,a3,a;
	cin >> a1;
	
	while (a1 <= 0) {
		if (a1 < 0){
			a1 = fabs(a1);
		}//让负数转为绝对值运算
		else if (a1 == 0) return 0;
	}
	a = a1;
	for (int i = 0;; i++) {
		a2 = a1;
		a3 = 0.5 * (a2 + a / a2);
		a1 = a3;
		if (fabs(a3 - a2) < 0.00001) {
			cout << a1;
			break;
		}
	}
	//经测试，10的﹣10次方精度超出double精度，无法使用
	return 0;
}