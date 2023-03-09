#include<iostream>
#include<conio.h>
#include"employee.h"
using namespace std;
void main()
{
	Employee emp;
	emp.display();
	Employee emp1(8,"ram",50000);
	emp1.display();
	getch();
}