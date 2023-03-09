#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
public:
	void circle1(double r)
	{
		cout<<"circle="<<3.14*r*r<<endl;
	}
	void rect1(int l,int b)
	{
		cout<<"rectangle="<<l*b<<endl;
	}
	void square1(int s)
	{
		cout<<"square="<<s*s<<endl;
	}
};
void main()
{
	circle obj;
	obj.circle1(1);
	obj.rect1(2,3);
	obj.square1(5);
	getch();

}