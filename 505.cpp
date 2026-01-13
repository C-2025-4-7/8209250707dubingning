#include<iostream>
using namespace std;
class Point {
private:
	int X;
	int Y;
public:
	Point(int x = 60, int y = 80) {
		X=x;
		Y=y;
	}
	void setPoint(int i, int j) {
		X += i;
		Y += j;
	}
	void display() {
		cout << "(" << X << "," << Y << ")" << endl;
	}
};
int main() {
	Point p1;
	p1.display();
	p1.setPoint(20, 10);
	p1.display();
	return 0;
}