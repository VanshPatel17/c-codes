#include<iostream>
#include<conio.h>
using namespace std;
inline int square(int a)
{
	return(a*a);
}
void main()
{
	int a,res;
	cout<<"enter value"<<endl;
	cin>>a;
	res=square(a);
	cout<<"square of given no.="<<res<<endl;

	getch();
}