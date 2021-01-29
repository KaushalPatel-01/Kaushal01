#include<iostream.h>
#include<conio.h>
class student
{
	private :
	int no, eng,maths,sci,total;
	float avg;
	char name[10],grade;
	public :
	void getdata()
	{
		cout<<"\nEnter no : ";
		cin>>no;
		cout<<"\nEnter name : ";
		cin>>name;
		cout<<"\nEnter eng : ";
		cin>>eng;
		cout<<"\nEnter maths : ";
		cin>>maths;
		cout<<"\nEnter sci : ";
		cin>>sci;

		total=eng+maths+sci;

		avg=total/3;

		if(avg<35)
			grade='F';
		else
			grade='P';
	}
	void putdata()
	{
		cout<<"\n******************************************";
		cout<<"\n  S T U D E N T  I N F O R M A T I O N ";
		cout<<"\n******************************************";
		cout<<"\n          NO          : "<<no;
		cout<<"\n          NAME        : "<<name;
		cout<<"\n          ENG         : "<<eng;
		cout<<"\n          MATHS       : "<<maths;
		cout<<"\n          SCI         : "<<sci;
		cout<<"\n          TOTAL       : "<<total;
		cout<<"\n          AVG         : "<<avg;
		cout<<"\n          GRADE       : "<<grade;
		cout<<"\n******************************************";
	}
};
main()
{

	student s[3];
	int i;

	clrscr();

	for(i=0;i<3;i++)
		s[i].getdata();
	for(i=0;i<3;i++)
		s[i].putdata();

	getch();
}