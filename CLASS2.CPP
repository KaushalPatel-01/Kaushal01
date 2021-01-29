#include<iostream.h>
#include<conio.h>
class employee
{
	int no;
	float basic,MA,HRA,DA,DED,NET;
	char name[10];
	public :
	void getdata()
	{
		cout<<"\nEnter no : ";
		cin>>no;
		cout<<"\nEnter name : ";
		cin>>name;
		cout<<"\nEnter basic : ";
		cin>>basic;

		MA=basic*10/100;
		HRA=basic*25/100;
		DA=basic*15/100;
		DED=basic*12/100;
		NET=basic+MA+HRA+DA-DED;
	}
	void putdata()
	{
		cout<<"\n******************************************";
		cout<<"\n E M P L O Y E E  I N F O R M A T I O N ";
		cout<<"\n******************************************";
		cout<<"\n       NO         : "<<no;
		cout<<"\n       NAME       : "<<name;
		cout<<"\n       BASIC      : "<<basic;
		cout<<"\n       MA         : "<<MA;
		cout<<"\n       HRA        : "<<HRA;
		cout<<"\n       DA         : "<<DA;
		cout<<"\n       DED        : "<<DED;
		cout<<"\n       NET        : "<<NET;
		cout<<"\n******************************************";
	}
};
main()
{
	employee e;

	clrscr();

	e.getdata();
	e.putdata();

	getch();
}

