#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	char op;
	cout << "输入第一个数" << endl;
	cin >> n1;
	cout << "输入运算符（+、-、*、/、%）" << endl;
	cin >> op;
	cout << "输入第二个数" << endl;
	cin >> n2;
	switch (op) {
	case '+':
		cout <<"答案为" << n1 + n2;
		break;
	case '-':
		cout << "答案为" << n1 - n2;
		break;
	case '*':
		cout << "答案为" << n1 * n2;
		break;
	case '/':
		if (n2 == 0)
			cout << "除数不能为0";
		else
			cout << "答案为" << n1 /n2;
		break;
	case '%':
		if (n2 == 0)
			cout << "除数不能为0";
		else 
			cout << "答案为" << n1 % n2;
		break;
	default:
		cout << "无效运算符";
	}
	return 0;
}