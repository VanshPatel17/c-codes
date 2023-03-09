#include<iostream>
#include<conio.h>
using namespace std;
class area
{
public :
	virtual float calarea()
	{
		return 0.0f;
	}
};
class circle : public area
{
	int r;
public:
	float calarea()
	{
		cout<<"enter rad";
		cin>>r;
		return(3.14*r*r);
	}
};
class rectangle : public area
{
	int a,b;
public:
	float calarea()
	{
		a=10,b=20;
		return (a*b);
	}
};
void main()
{
	area* aptr=new circle();
	cout<<"area of circle="<<aptr->calarea()<<endl;
	area*aptr1=new rectangle();
	cout<<"area of rectangle="<<aptr1->calarea()<<endl;
	getch();
}