//#include<iostream>
//#include<conio.h>
//#include"string.h"
//#include"date.h"
//using namespace std;
/*class Employee
{
	int empid;
	char name[20];
	double salary;
public:
	Employee()
	{
		empid=17;
		strcpy(name,"vansh");
		salary=400000;
	}
	Employee(int id,char*str,double sal)
	{
		empid=id;
		strcpy(name,str);
		salary=sal;
	}
	void display()
	{
		cout<<"id ="<<empid<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"salary ="<<salary<<endl;
	}
};*/

/*class Employee
{
	int empid;
	char name[20];
	double salary;
public:
	Employee()
	{
		empid=17;
		strcpy(name,"vansh");
		salary=400000;
	}
	Employee(int id,char*str,double sal)
	{
		empid=id;
		strcpy(name,str);
		salary=sal;
	}
	void display() const
	{
		cout<<"id ="<<empid<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"salary ="<<salary<<endl;
	}
};*/


//class Employee
//{
//	 int empid;
//	char name[20];
//	double salary;
//	 
//public:
//	Employee()
//	{
//		empid=17;
//		strcpy(name,"vansh");
//		salary=400000;
//		
//	}
//	Employee(int id,char*str,double sal)
//	{
//		empid=id;
//		strcpy(name,str);
//		salary=sal;
//		strcpy(company,"tech mahindra");
//	}
//	static int getid()
//	{
//		return empid;
//	}
//	static char*getcompany()
//	{
//		return company;
//	}
//	void display() 
//	{
//		cout<<"id ="<<empid<<endl;
//		cout<<"name = "<<name<<endl;
//		cout<<"salary ="<<salary<<endl;
//		cout<<"company ="<<company<<endl;
//	}
//};
//int Employee::empid;
//char Employee::company[25];


//class Employee
//{
//	 int empid;
//	string name;
//	double salary;
//	Date birthdate;
//public:
//	Employee()
//	{
//		empid=0;
//		name=string();
//		birthdate=Date();
//		salary=8000.0;
//	}
//	Employee(int id,char*str,double sal,int d,int m,int y)
//	{
//		empid=id;
//		name=string(str);
//		salary=sal;
//		birthdate=Date(d,m,y);
//	}
//	 
//	void display() 
//	{
//		cout<<"id ="<<empid<<endl;
//		cout<<"name = ";
//		name.display();
//		cout<<"salary ="<<salary<<endl;
//		cout<<"birthdate=";
//		birthdate.display();
//	}
//};



#include<iostream>
#include<conio.h>
#include"cstring.h"
#include"date.h"
using namespace std;
class employee
{
	int empid;
	String name;
	double salary;
	Date birthdate;
public:
	employee()
	{
		empid=0;
		name=String();
		birthdate=Date();
		salary=800.0;
	}
	employee(int id,char* str,double sal,int d,int m,int y)
	{
		empid=id;
		name=String(str);
		salary=sal;
		birthdate=Date(d,m,y);
	}
	void display()
	{
		cout<<"id="<<empid<<endl;
		cout<<"name=";
		name.display();
		cout<<"salary="<<salary<<endl;
		cout<<"birthdate=";
		birthdate.display();
	}
};