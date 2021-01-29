//Program :- Friend function.
#include<iostream.h>
#include<conio.h>

class ABC;  //Forward declaration
class XYZ
{
	int x;
	public:
	void getvalue()
	{
		cout<<"Enter the value for x : ";
		cin>>x;
	}
	friend void max(XYZ,ABC);
};
class ABC
{
	int a;
	public:
	void getvalue()
	{
		cout<<"Enter the value for a : ";
		cin>>a;
	}
	friend void max(XYZ,ABC);
};

void max(XYZ m,ABC n)
{
if(m.x>n.a)
	cout<<"big is x : "<<m.x;
else
	cout<<"big is a : "<<n.a;
}
main()
{
	ABC a1;
	XYZ x1;
	clrscr();
	a1.getvalue();
	x1.getvalue();
	max(x1,a1);
	getch();
}