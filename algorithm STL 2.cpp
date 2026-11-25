#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    reverse(v.begin(), v.end());

    cout << "Reversed Vector: ";

    for(int x : v)
        cout << x << " ";
    auto it = max_element(v.begin(), v.end());

    cout << "Maximum Element: " << *it;
   
        auto it1 = min_element(v.begin(), v.end());

    cout << "Minimum Element: " << *it1;


    return 0;
}