#include<iostream>
#include<conio.h>
#include"complex.h"
using namespace std;
void main()
{
	complex c1(2,3),c2(1,5),c3;
	c1.display();
	c2.display();
	cout<<"mult=";
	c3=c1*c2;
	c3.display();
	getch();
}