#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int marks[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    return (float)sum / n;
}

// Function to find highest mark
int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }

    return highest;
}

// Function to find lowest mark
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    return lowest;
}

// Function to sort marks using Bubble Sort
void bubbleSort(int marks[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\nAverage Marks: "
         << calculateAverage(marks, n);

    cout << "\nHighest Mark: "
         << findHighest(marks, n);

    cout << "\nLowest Mark: "
         << findLowest(marks, n);

    bubbleSort(marks, n);

    cout << "\nSorted Marks (Ascending Order): ";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}