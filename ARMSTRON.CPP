//Program : Armstrong no.
#include<iostream.h>
#include<conio.h>
main()
{
	int no,digit,cubesum=0,dno;

	clrscr();

	cout<<"\nEnter no : ";
	cin>>no;

	dno=no;

	while(no>0)
	{
		digit=no%10;
		no=no/10;
		cubesum=cubesum+digit*digit*digit;
	}

	if(dno==cubesum)
		cout<<"\nEnter no is Armstrong";
	else
		cout<<"\nEnter no is not Armstrong";

	getch();
}