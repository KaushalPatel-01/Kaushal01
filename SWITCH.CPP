//Program : Switch.
#include<iostream.h>
#include<conio.h>
main()
{
	  int no1,no2;
	  char op;

	  clrscr();
	  cout<<"Enter equation : ";
	  cin>>no1>>op>>no2;

	  switch(op)
	  {
		case'+':cout<<"ans is : "<<no1+no2;
			break;
		case'-':cout<<"ans is : "<<no1-no2;
			break;
		case'*':cout<<"ans is : "<<no1*no2;
			break;
		case'/':cout<<"ans is : "<<no1/no2;
			break;
		case'%':cout<<"ans is : "<<no1%no2;
			break;
		default : cout<<"Invalid equation ";
			break;
	  }
	  getch();
}