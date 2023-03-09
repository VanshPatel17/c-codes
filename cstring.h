#include<iostream>
#include<conio.h>
using namespace std;
class String
{
	int len;
	char*str;
public:
	String()
	{
		len=1;
		str=new char[1];
		str[0]='\0';
	}
	String(char* str1)
	{
		len=strlen(str1);
		str=new char[len+1];
		strcpy(str,str1);
	}
	String(String& obj)
	{
		len=strlen(obj.str);
		str=new char(len+1);
		strcpy(str,obj.str);
	}
	char& operator [] (int index)
	{
		if(index>0 && index<len)
			return *(str+index);
	}
	char* operator () (int index)
	{
		if(index>0 && index<len)
			return (str+index);
	}
	void display()
	{
		cout<<"string="<<str<<endl;
	}
	/*~String()
	{
		delete[]str;
	}*/
};