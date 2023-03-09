#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
	int x;
public:
	Demo()
	{
		x=300;
	}
	friend class myDemo;
};

class myDemo
{
public:
	void getDemo(Demo obj)
	{
		cout<<"x="<<obj.x<<endl;
	}
};
void main()
{
	Demo obj1;
	myDemo obj2;
	obj2.getDemo(obj1);
	getch();
}