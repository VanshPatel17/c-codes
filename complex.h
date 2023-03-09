#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int real,imag;
public:
complex()
{
	real=0;
	imag=0;
}
complex(int r,char i)
{
	real=r;
	imag=i;
}
complex operator +(complex obj)
{
	complex temp;
	temp.real=this->real+obj.real;
	temp.imag=this->imag+obj.imag;
	return temp;
}
friend  complex operator+(int x,complex& obj);
void display()
{
	cout<<"real="<<real<<" + "<<imag<<"i"<<endl;
}
};

complex operator+(int x,complex& obj)
{
	complex temp;
	temp.real=x+obj.real;
	temp.imag=x+obj.imag;
	return temp;
}