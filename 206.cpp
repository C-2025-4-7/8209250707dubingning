#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b,c,e;
	cin >> a >> b;
	c = max(a, b);
	e = min(a, b);
	int d = 0;
	for (int i = c;i<=a*b ; i++) {
		if (a == 0 || b == 0)break;
		else if (i % a == 0 && i % b == 0) {
			d = i;
			cout << "最小公倍数为" << d<<endl;
			break;
		}
	}
	if (c % e == 0) 
			cout << "最大公约数为" << e<<endl;
	else {
		for (int i = 0;; i++) {
			int r = c % e;
			c = e;
			e = r;
			if (r == 0) {
				cout << "最大公约数为" << c;
				break;
			}
		
		}


	}
	return 0;
}