#include<iostream.h>
#include<conio.h>

class ABC;
class PQR;
class XYZ
{
	int x;
	public:
	void getvalue()
	{
		cout<<"Enter the value for x : ";
		cin>>x;
	}
	friend void sum(ABC,PQR,XYZ);
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
	friend void sum(ABC,PQR,XYZ);
};
class PQR
{
	int p;
	public:
	void getvalue()
	{
		cout<<"Enter the value for p : ";
		cin>>p;
	}
	friend void sum(ABC,PQR,XYZ)
};

void sum(ABC m,PQR n,XYZ o)
{
int sum=0;
sum=m.a+n.p+o.x;
cout<<"Sum of the addition of three value is : "<<sum;
}
main()
{
	ABC a1;
	PQR p1;
	XYZ x1;
	clrscr();
	a1.getvalue();
	p1.getvalue();
	x1.getvalue();
	sum(a1,p1,x1);
	getch();
}


