#include<iostream>
#include<conio.h>
using namespace std;
class addition
{
public:
	void sum(int n1,int n2)
	{
		cout<<"sum="<<n1+n2<<endl;
	}
	void sum(int n1,int n2,int n3)
	{
		cout<<"sum="<<n1+n2+n3<<endl;
	}
};
void main()
{
	addition obj;
	obj.sum(100,300);
	obj.sum(100,400,500);
	getch();
}