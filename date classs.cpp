#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
	int day,month,year;
public:
	void accept()
	{
		cout<<"enter value";
		cin>>day>>month>>year;
	}
	void display()
	{
		cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
	}
};
void main()
{
	Date obj;
	obj.accept();
	obj.display();
	getch();
}
		