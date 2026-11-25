#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    vector<int>::iterator it;

    cout << "Vector Elements: ";

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}