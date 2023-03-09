#include<iostream>
#include<conio.h>
using namespace std;
inline int interest(int principle,int time,int rate)
{
	return(principle,time,rate)/100;
}
void main()
{
	int r,prin,time,rate;
	cout<<"enter prin"<<endl;
	cin>>prin;
	cout<<"enter time"<<endl;
	cin>>time;
	cout<<"enter rate"<<endl;
	cin>>rate;
	r=interest(prin,time,rate);
	cout<<"SI="<<r<<endl;
	getch();
}