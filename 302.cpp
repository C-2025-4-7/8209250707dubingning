#include<iostream>
#include<algorithm>
using namespace std;
bool is_prime(int a) {
	if (a == 1) return true;
	else {
		for (int i = 1; i < a; i++) {
			if (i != 1 && a % i == 0)return false;
			else if (i == a - 1)return true;
		}

	}

}
int main() {
	bool is_prime(int);
	int sum = 0;
	for (int i = 1; ; i++) {
		if (is_prime(i) == 1) {
			cout << i << '\t';
			sum++;
			if (sum % 10 == 0)cout << endl;
			if (sum == 200) return 0;
		}
	}
}