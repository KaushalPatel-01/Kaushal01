#include<fstream.h>
main()
{
	char name[30];
	float cost;

	ofstream fout("ITEM");
	cout<<"Enter item name : ";
	cin>>name;
	fout<<name<<endl;
	cout<<"Enter item cost : ";
	cin>>cost;
	fout<<cost<<endl;
	fout.close();

	ifstream inf("ITEM");
	inf>>name;
	inf>>cost;
	cout<<"Item name :"<<name<<"\n";
	cout<<"Item cost :"<<cost<<"\n";
	inf.close();
}