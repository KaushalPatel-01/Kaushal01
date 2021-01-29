//Program : Arithmaticop
#include<iostream.h>
#include<conio.h>
main()
{
	  int no,i;

	  clrscr();

	  cout<<"Enter no : ";
	  cin>>no;

	  cout<<"Multiplication table of "<<no<<" is"<<endl;

	  i=1;
	  while(i<=10)
	  {
		cout<<no<<"*"<<i<<"="<<no*i<<endl;
		i++;
	  }
	  getch();
}