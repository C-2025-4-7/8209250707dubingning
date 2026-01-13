#include<iostream>
using namespace std;
class Student {
private:
	int Score, Num;
public:
	Student(int num = 000000, int score = 000) {
		Score = score;
		Num = num;
	}
	void write() {
		int a, b;
		cin >> a >> b;
		Num = a;
		Score = b;
	}
	int sco() {
		return Score;
	}
	int number() { 
		return Num;
	}

};
	void findmax(Student* &cp, Student stu[]) {//用指针引用方便形参和实参同步，先开始没注意到
		cp = &stu[0];
		for (int i = 0; i < 5; i++) {
			if (stu[i].sco()>cp->sco()) {
				cp = &stu[i];
			}
		}
	}
	const int sn = 5;
int main() {
	Student stu[5];
	for (int i = 0; i < 5; i++) {
		stu[i].write();
	}
	Student* cp=nullptr;//初始化

	findmax(cp, stu);
	cout<<"最高分学生的学号为："<<cp->number() << endl;
	return 0;
}