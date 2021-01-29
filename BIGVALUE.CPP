//Program : big no.
#include<iostream.h>
#include<conio.h>
main()
{
	  int no1,no2,big;

	  clrscr();

	  cout<<"Enter no1 : ";
	  cin>>no1;

	  cout<<"Enter no2 : ";
	  cin>>no2;

	  if(no1>no2)
		big=no1;
	  else
		big=no2;

	  cout<<"big value is : "<<big;
	  getch();
}