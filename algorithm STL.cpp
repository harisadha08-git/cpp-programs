#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {40, 10, 30, 20, 10};

    sort(v.begin(), v.end());

    cout << "Sorted Elements: ";

    for(int x : v)
        cout << x << " ";

    return 0;
}