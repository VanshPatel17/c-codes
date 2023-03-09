#include<iostream>
#include<conio.h>
using namespace std;
class base
{
public:
	virtual void show()
	{
		cout<<"base class show called"<<endl;
	}
};
class child : public base
{
public:
	void show()
	{
		cout<<"child class show called"<<endl;
	}
	void display()
	{
		cout<<"child class display called"<<endl;
	}
};
void main()
{
	base* aptr=new child();
	aptr->show();
	child* aptr1=dynamic_cast<child*>(aptr);
	aptr1->display();
	getch();
}