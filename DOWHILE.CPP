//Program : Arithmaticop
#include<iostream.h>
#include<conio.h>
main()
{
	  int i;

	  clrscr();

	  i=100;
	  do
	  {
		if(i%2==1)
			cout<<i<<" ";
		i--;
	  }
	  while(i>0);
	  getch();
}