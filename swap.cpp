#include<iostream>
#include<conio.h>
using namespace std;

void swap(int &num1,int &num2)
{
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
}

void main()
{
	int a=100,b=50;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	getch();
}

