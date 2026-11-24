#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("sample.txt", ios::app);
     if(file.is_open())
    {
   
    file<<"append mode checking";
    file<<"******************";
    }
    else
    cout<<"File can't opened"<<endl;
    file.close();
}