#include<iostream>
using namespace std;
void add(int,int);
int main()
{
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
	add(n1,n2);
	return 0;
}
void add(int n1,int n2)
{
	cout<<"the sum is "<<n1+n2;
}
