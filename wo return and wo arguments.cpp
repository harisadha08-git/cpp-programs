#include<iostream>
using namespace std;
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int a,b;
	cout<<"enter two values:";
	cin>>a>>b;
	cout<<"the sum is "<<a+b;
}
