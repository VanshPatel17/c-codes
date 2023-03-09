#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int x;
public:
	demo()
	{
		x=0;
	}
	friend void show(demo obj);
};
void show(demo obj)
{
	cout<<"x="<<obj.x<<endl;
}
void main()
{
	demo obj;
	show(obj);
	getch();
}