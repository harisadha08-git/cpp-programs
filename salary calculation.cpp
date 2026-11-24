#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,id,sal;
	string ename;
	float finsal,hra,da;
	cout<<"Enter number of employees:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter employee id:";
		cin>>id;
		cout<<"Enter name:";
		cin>>ename;
		cout<<"Enter salary:";
		cin>>sal;
		if(sal<=20000)
		{
			hra=sal*0.1;
		}
		else if(sal>20000 && sal<=40000)
		{
			hra=sal*0.15;
		}
		else
		{
			hra=sal*0.2;
		}
		da=sal*0.1;
		finsal=sal+hra+da;
		cout<<"\nEmployee Details";
		cout<<"\nEmployee name:"<<ename;
		cout<<"\nSalary:"<<sal;
		cout<<"\nFinal Salary:"<<finsal<<endl<<endl<<endl;
	}
	return 0;
}
