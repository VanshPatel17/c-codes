#include<iostream>
#include<conio.h>
using namespace std;

namespace first_space
{
	void show()
	{
		cout<<"first class show called";
	}
}

namespace second_space
{
	void show()
	{
		cout<<"\nsecond class show called";
	}
}

void main()
{
	using namespace first_space;
	show();
	second_space::show();
	getch();
}