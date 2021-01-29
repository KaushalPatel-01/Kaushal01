#include<iostream.h>
#include<conio.h>
main()
{
	int i,a=99,b=123,big;

	cout<<"BREAK DEMO : "<<endl;
	for(i=1;1<=10;i++)
	{
		if(i==5)
			break;
		cout<<i<<" ";
	}
	cout<<"CONTINUE DEMO : "<<endl;
	for(i=1;i<=10;i++)
	{
		if(i<=5)
			continue;
		cout<<i<<" ";
	}
	cout<<"TERNARY DEMO : "<<endl;
	big=(a>b)?a:b;
	cout<<"Big is : "<<big;

	getch();
}