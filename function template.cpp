#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << "Integer Addition: " << add(10, 20) << endl;
    cout << "Float Addition: " << add(5.5f, 2.5f) << endl;
    cout << "Double Addition: " << add(10.5, 20.5) << endl;
}