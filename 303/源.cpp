#include <iostream>
#include<iomanip>
using namespace std;
#include"mytemperature.h"
int main() {
	cout << "Celsius" << '\t' << "Fahrenheit"<<endl;
	for (double i = 40.0; i > 30.0; i=i-1.0) {
		cout << fixed << setprecision(1) << i / 1.00 << '\t';
		cout<<fixed<<setprecision(1)<<celsius_to_fah(i) << endl;
	}
	cout << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (double i = 120.0; i > 20.0; i = i - 10.0) {
		cout << fixed << setprecision(1) << i / 1.00 << '\t';
		cout << fixed << setprecision(2) << fahrenheit_to_cels(i) << endl;
	}
	return 0;
}