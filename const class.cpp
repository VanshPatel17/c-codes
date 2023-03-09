#include<iostream>
#include<conio.h>
#include"employee.h"
using namespace std;
void main()
{
	const Employee emp;
	Employee emp1(4,"sejal",800000);
	emp1.display();
	emp.display();
	getch();
}