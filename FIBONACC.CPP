//Program : Fibonacci no.
#include<iostream.h>
#include<conio.h>
main()
{
	int i,f1=0,f2=1,f3=0,n;

	clrscr();

	cout<<"\nEnter how many fibonacci no you want ?";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cout<<f1;
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	getch();
}