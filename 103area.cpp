#include <iostream>                                 
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "double length£º" << sizeof(double) << endl;
	cout << "long double length£º" << sizeof(long double) << endl;
	cout << "float length£º" << sizeof(float) << endl;
	cout << "long length£º" << sizeof(long) << endl;
	cout << "short length£º" << sizeof(short) << endl;
	return 0;
}