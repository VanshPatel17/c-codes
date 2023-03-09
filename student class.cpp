#include<iostream>
#include<conio.h>
#include"student.h"
using namespace std;
void main()
{
	student stu;
	stu.display();
	student stu1("ram",65.24);
	stu1.display();
	student stu2("sejal",90.99);
	stu2.display();
	getch();
}