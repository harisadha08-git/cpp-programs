#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    cout<<"length="<<str.length()<<endl;
    cout<<"size="<<str.size()<<endl;
    //cout<<"push_back()="<<str.push_back('$')<<endl;  we can't give pushback in cout
    str.push_back('$');
    cout<<"push_back="<<str<<endl;
    str.pop_back();
    cout<<"pop_back="<<str<<endl;
    return 0;
}