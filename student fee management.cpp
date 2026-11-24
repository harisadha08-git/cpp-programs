#include<iostream>
#include<string>
using namespace std;
int main()
{
	int id,ch,credit,catcho;
	string sname,dept,cat;
	double fee,dis,finfee;
	cout<<"enter student rollnumber:";
	cin>>id;
	cout<<"enter student name:";
	cin>>sname;
	cout<<"---------DEPARTMENTS---------";
	cout<<"\n1. CSE\n2. IT\n3. ECE\n4. MECHANICAL\n5. CIVIL";
	cout<<"\nenter department choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			fee=1500;
			dept="CSE";
			break;
		case 2:
			fee=1400;
			dept="IT";
			break;
		case 3:
			fee=1300;
			dept="ECE";
			break;
		case 4:
			fee=1200;
			dept="MECHANICAL";
			break;
		case 5:
			fee=1100;
			dept="CIVIL";
			break;
		default:
			cout<<"\nInvalid Choice";
	}
	cout<<"\nenter number of credits:";
	cin>>credit;
	cout<<"\n---------CATEGORY DETAILS---------";
	cout<<"\n1. REGULAR\n2. SCHOLARSHIP\n3. SPORTS\n4. MERIT";
	cout<<"\nenter your category:";
	cin>>catcho;
	if(catcho==1)
	{
		cat="Regular";
		dis=0;
	}
	else if(catcho==2)
	{
		cat="Scholarship";
		dis=fee*(25/100);
	}
	else if(catcho==3)
	{
		cat="Sports";
		dis=fee*(15/100);
	}
	else if(catcho==4)
	{
		cat="Merit";
		dis=fee*(20/100);
	}
	else
	{
		cout<<"\nInvalid Choice";
	}
	finfee=fee*credit-dis;
	cout<<"\nStudent Details";
	cout<<"\nRollnumber:"<<id;
	cout<<"\nStudent Name:"<<sname;
	cout<<"\nDepartment:"<<dept;
	cout<<"\nCategory:"<<cat;
	cout<<"\nFinal Fee:"<<finfee;
	return 0;
}
