#include <iostream>
using namespace std;
class Vol {
private:
	int L, W, H;
public:
	void vol() {
		int a, b, c;
		cout << "请输入长、宽、高";
		cin >> a >> b >> c;
		L = a;
		W = b;
		H = c;
		
	}
	void showVol() {
		cout << "长方柱体积为：" << L * W * H << endl;
	}
};
int main() {
	Vol v1;
	Vol v2;
	Vol v3;
	int a, b, c;
	v1.vol();
	v2.vol();
	v3.vol();
	v1.showVol();
	v2.showVol();
	v3.showVol();
	return 0;
}