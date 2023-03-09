#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
	int day,month,year;
public:
	Date()
	{
		day=17;
		month=9;
		year=2005;
	}
	Date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
	void display()
	{
		cout<<"date="<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
void main()
{
	Date obj;
	obj.display();
	Date obj1(12,4,2001);
	obj1.display();
	getch();
}
