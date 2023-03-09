#include<iostream>
#include<conio.h>
using namespace std;
void display(int,int=4,int=0);
void display(int s,int v,int p)
{
	cout<<"s="<<s<<endl;
	cout<<"v="<<v<<endl;
	cout<<"p="<<p<<endl;
}
void main()
{
	//display();
	display(10);
	display(10,20,30);
	//display(10, ,20);
	getch();
}