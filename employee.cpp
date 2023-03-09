#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	int salary;
    char name;
public:
employee()
{
	salary=20000;
	name='v';
}
employee(int s,char i)
{
	salary=s;
	name=i;
}
void display()
{
	cout<<"empl="<<name<<"  "<<salary<<endl;
}
};
void main()
{
	employee obj;
	obj.display();
	getch();
}
