#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word1[10],word2[20];
    cout<<"enter word1:";
    cin>>word1;
    strcpy(word2,word1);
    strcat(word1," c++");
    cout<<"word2: "<<word2<<endl;
    cout<<"word1: "<<word1<<endl;
    return 0;
}