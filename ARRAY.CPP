#include<iostream.h>
#include<conio.h>
main()
{
	int a[10],i,big;

	clrscr();
	for(i=0;i<10;i++)
	{
		cout<<"Enter no : ";
		cin>>a[i];
	}

	big=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>big)
			big=a[i];
		cout<<a[i]<<endl;
	}
	cout<<"Big value is : "<<big;
	getch();
}

