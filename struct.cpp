#include<iostream>
#include<string>
using namespace std;
struct student
{
    int rollno;
    string name,address;
    float percentage;
}s;
int main()
{
    cout<<"enter rollno:";
    cin>>s.rollno;
    cin.ignore();
    cout<<"enter name:";
    getline(cin,s.name);
    cout<<"enter your address:";
    getline(cin,s.address);
    cout<<"enter your percentage:";
    cin>>s.percentage;
    cout << "roll no: "<<s.rollno<<endl;
    cout << "name: "<<s.name<<endl;
    cout << "address: "<<s.address<<endl;
    cout << "percentage: "<<s.percentage<<endl;


}