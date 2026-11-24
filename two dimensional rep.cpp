#include<iostream>
using namespace std;
int main()
{
	int row,col;
	cout<<"enter value for row and column:";
	cin>>row>>col;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i==j)
			cout<<"*\t";
			else
			cout<<i<<j<<"\t";
		}
		cout<<"\n";
	}
}
