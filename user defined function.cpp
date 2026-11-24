#include<iostream>
using namespace std;
void cube(float);
int main()
{
	float value;
	cin>>value;
	cube(value);
	return 0;
}
void cube(float x)
{
	cout<<"the cube value is "<<x*x*x;
}
