#include <iostream>
using namespace std;
int main() {
	const float PI = 3.14;//定义常量pi
	double r, h,V;//定义长,宽,体积
	cin >> r >> h;
	V = r * r * PI * h / 3;
	cout << V;


	return 0;
}