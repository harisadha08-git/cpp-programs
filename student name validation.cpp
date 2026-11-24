#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int count=0;

    cout<<"Enter student name: ";
    cin.getline(name,100);

    if(name[0]=='\0')
    {
        cout<<"Student name is empty.";
    }
    else
    {
        while(name[count]!='\0')
        {
            count++;
        }

        cout<<"Student Name: "<<name<<endl;
        cout<<"Number of Characters: "<<count;
    }

    return 0;
}
