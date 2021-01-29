//Program : Arithmaticop
#include<iostream.h>
#include<conio.h>
main()
{
	  int no,i,fact=1;

	  clrscr();

	  cout<<"Enter no : ";
	  cin>>no;

	  for(i=1;i<no;i++)
		fact=fact*no;

	  cout<<"Factorial of given no is : "<<fact;

	  getch();
}


