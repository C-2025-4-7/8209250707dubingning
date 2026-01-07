#pragma once
//student.h  
//              (这是头文件，在此文件中进行类的声明)
#include<iostream>
#include<string>
using namespace std;
 class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	Student(int a = 0, string b="000", char c = 'f') {
		num = a;
		name = b;
		sex = c;
	}
private:
	int num;
	string name;
	char sex;
};