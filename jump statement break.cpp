#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the n value:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i==8)
		break;
		else
		cout<<i<<"\n";
	}
}
