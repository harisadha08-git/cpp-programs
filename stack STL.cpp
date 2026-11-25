#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};

    stack<int> s;

    // Insert vector elements into stack
    for(int x : v)
    {
        s.push(x);
    }

    cout << "Top Element: " << s.top() << endl;

    cout << "Stack Elements: ";

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}