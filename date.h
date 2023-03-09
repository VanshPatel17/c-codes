#include<iostream>
#include<conio.h>
using namespace std;
class Date
{

	int day,month,year;
public:
	class Date()
	{
		day=1;
		month=3;
		year=200;
	}

	class Date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
	
	void display()
	{
		cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
	}
};