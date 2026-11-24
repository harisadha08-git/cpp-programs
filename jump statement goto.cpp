#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the n value:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==5)
		goto check;
		else
		cout<<i<<"\n";
	}
	check: cout<<"GOTO statement\n";
}
