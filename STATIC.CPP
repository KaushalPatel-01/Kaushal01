//Program : Static data Member OR CLass variables.
#include<iostream.h>
#include<conio.h>
class item
{
	static int count;
	int number;
	public :
	void getdata(int a)
	{
		number=a;
		count++;
	}
	void putdata()
	{
		cout<<"count : "<<count<<endl;
	}
};
int item :: count;
main()
{
item a,b,c;

a.getcount();
b.getcount();
c.getcount();

a.getdata(100);
b.getdata(200);
c.getdata(300);

cout<<"After reading data"<<"\n";
a.getcount();
b.getcount();
c.getcount();
}