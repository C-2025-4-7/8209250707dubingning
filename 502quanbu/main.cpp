#include <iostream>
#include"student.h"
using namespace std;

int main() {
	Student stud;                //定义对象
	Student stud1(007, "tcg", 'm');
	stud.display();
	stud1.display();              //执行stud对象的display函数
	return 0;

}