#include<iostream>
using namespace std;
extern double celsius_to_fah(double cel) {
	double F;
	F = cel * 1.8 + 32;
	return F;

}
extern double fahrenheit_to_cels(double fah){
	double C;
	C = (fah - 32) / 1.8;
	return C;
}