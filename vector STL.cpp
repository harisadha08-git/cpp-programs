#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    marks.push_back(85);
    marks.push_back(90);
    marks.push_back(78);
    marks.push_back(95);

    cout << "Student Marks: ";

    for(int i = 0; i < marks.size(); i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\nTotal Elements: " << marks.size();

    return 0;
}