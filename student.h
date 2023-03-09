#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	static int roll;
	char name[20];
	float per;
	static char college[25];
public:
	student()
	{
		++roll;
		strcpy(name,"vansh");
		per=97.25;
		strcpy(college,"trinity");
	}
	student(char*str,double perc)
	{
		++roll;
		strcpy(name,str);
		per=perc;
		strcpy(college,"mit");
	}
	static int getroll()
	{
		return roll;
	}
	static char*getcollege()
	{
		return college;
	}
	void display() 
	{
		cout<<"roll ="<<roll<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"per ="<<per<<endl;
		cout<<"college ="<<college<<endl;
	}
};
int student::roll;
char student::college[25];