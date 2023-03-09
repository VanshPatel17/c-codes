#include<iostream>
#include<conio.h>
using namespace std;
class date
{
		int day,month,year;
public:
	date()
	{
		day=17;
		month=9;
		year=2005;
	}
	date(int day,int month,int year)
	{
		this->day=day;
		this->month=month;
		this->year=year;
	}
	int getday()
	{
		return day;
	}
	int getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}
	void setday(int d)
	{
		day=d;
	}
	void setmonth(int m)
	{
		month=m;
	}
	void setyear(int y)
	{
		year=y;
	}
	void display()
	{
		cout<<"date="<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
	void main()
	{
		date obj(12,12,2343);
		obj.display();
		cout<<"today day is"<<obj.getday()<<endl;
		cout<<"today month is"<<obj.getmonth()<<endl;
		cout<<"year is"<<obj.getyear()<<endl;
		obj.setday(17);
		obj.setmonth(11);
		obj.setyear(2514);
		obj.display();
		getch();
	}