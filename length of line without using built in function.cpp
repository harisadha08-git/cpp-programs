#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    char line[100];
    int count =0;
    cout<<"enter a line of words:";
    cin.getline(line,100);
    while(line[count]!='\0')
    {
        count++;
    }
    cout<<"the length of the line is:"<<count;
    return 0;   
}