#include<iostream>
using namespace std;
int main()
{
	int num,sum,rem;
	cout<<"enter a number:";
	cin>>num;
	sum=0;
	while(num!=0)
	{
		rem=num%10;
		num/=10;
		sum+=rem;
	}
	cout<<"the sum of the digits is "<<sum;
	return 0;
}
