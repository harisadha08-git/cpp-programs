#include<iostream>
using namespace std;
int main()
{
    int n, m, found = 0;
    cout << "Enter the value for n and m: ";
    cin >> n >> m;
    int arr[100][100];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Display matrix
    cout << "Matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    // Find lucky number
    for(int i = 0; i < n; i++)
    {
        int col = 0;
        // Find smallest element in row
        for(int j = 1; j < m; j++)
        {
            if(arr[i][j] < arr[i][col])
            {
                col = j;
            }
        }
        // Check largest in column
        bool lucky = true;
        for(int k = 0; k < n; k++)
        {
            if(arr[k][col] > arr[i][col])
            {
                lucky = false;
                break;
            }
        }
        if(lucky)
        {
            cout << "Lucky Number: " << arr[i][col] << endl;
            found = 1;
        }
    }
    if(found == 0)
    {
        cout << "No Lucky Number";
    }
    return 0;
}