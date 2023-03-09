#include<iostream>
#include<conio.h>
using namespace std;
 void main()
 {
	 int n;
	cout<<"enter how may value";
	cin>>n;
	int *ptr=new int(n);
	for (int i=0;i<n;i++)
	{
		cout<<"enter value";
		cin>>ptr[i];
	}
	cout<<"display value"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<ptr[i]<<"  ";
	}
	delete[]ptr;
	getch();
}