#include<iostream>
#include<conio.h>
using namespace std;
class area
{
public:
		virtual float calarea()=0;
		virtual ~area()
	{
		cout<<"destructor of area call"<<endl;
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
	~circle()
	{
		cout<<"destructor of circle call"<<endl;
	}
};

void main()
{
	area* aptr=new circle();
	//cout<<"area of circle="<<aptr->calarea()<<endl;
	delete aptr;
	getch();
}