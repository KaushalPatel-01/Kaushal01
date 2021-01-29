#include<iostream.h>
#include<conio.h>
class student
{
	protected:
		int roll_number;
	public:
	void get_number(int a)
	{
		roll_number=a;
	}
	void put_number()
	{
		cout<<"Roll number : "<<roll_number<<endl;
	}
};

class test
{
	protected:
		float eng;
		float maths;
		float sci;
	public:
	void get_marks(float e,float m,float s)
	{
		eng=e;
		maths=m;
		sci=s;
	}
	void put_marks()
	{
		cout<<"English     : "<<eng<<endl;
		cout<<"Maths       : "<<maths<<endl;
		cout<<"Science     : "<<sci<<endl;
	}
};


class sports
{
	protected:
	float sp;
	public:
	void get_sp(float s)
	{
		sp=s;
	}
	void put_sp()
	{
		cout<<"Sports     : "<<sp<<endl;
	}
};


class result:public test,public student
{
		float total;
	public:

	void display()
	{
		total=eng+maths+sci;
		put_number();
		put_marks();
		cout<<"Total     : "<<total<<endl;
	}
};
main()
{

	result s1;
	clrscr();
	s1.get_number(1);
	s1.get_marks(70,80,90);
	s1.display();
	getch();
}

