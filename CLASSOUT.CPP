//Program : Outside function.
#include<iostream.h>
#include<conio.h>
class student
{
	private :
	int no, eng,maths,sci,total;
	float avg;
	char name[10],grade;
	public :
	void getdata();
	void putdata();
};
void student :: getdata()
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
void student :: putdata()
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
main()
{

	student s1;

	clrscr();

	s1.getdata();
	s1.putdata();

	getch();
}