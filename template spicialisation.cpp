#include <iostream>
using namespace std;

// General template
template <typename T>
void display(T value)
{
    cout << "Value: " << value << endl;
}

// Specialized template for char
template <>
void display<char>(char value)
{
    cout << "Character: " << value << endl;
}

template <>
void display<string>(string value)
{
    cout << "String: " << value << endl;
}

int main()
{
    display(100);
    display(25.5);
    display('A');
    display("C++ programming");

    return 0;
}