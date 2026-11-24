//Usig fstream class
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("sample.txt", ios::in);

    if (!file.is_open())
    {
        cout << "Error: Unable to open file!" << endl;
        return 1;
    }

    string line;

    cout << "Contents of the file:" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}