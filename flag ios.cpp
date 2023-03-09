#include<iostream>
using namespace std;

int main()
{
	cout.setf(ios::showbase);
	cout.setf(ios::uppercase);
	cout.setf(ios::hex, ios::basefield);
	cout<< 324 <<endl;
	cout.unsetf(ios::uppercase);

	cout.setf(ios::right, ios::adjustfield);
	cout.width(12);
	cout.fill('*');
	cout<< 1548764341 <<endl;
	return 0;
}