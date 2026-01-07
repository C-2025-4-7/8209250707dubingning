#include<iostream>
using namespace std;
class Time {
private:
	int M, H, S;
public:
	void wirte() {
		int h, m, s;
		cout << "ÇëÊäÈëÊ±¼ä";
		cin >> h >> m >> s;
		H = h;
		S = s;
		M = m;
	}
	void showTime() {
		cout << H << ":" << M << ":" << S;
	}
};

int main()
{
	Time t;
	t.wirte();
	t.showTime();
	return 0;
}