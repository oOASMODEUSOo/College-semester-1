#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int m = 5;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of student";
        cout << i + 1 << " : " << endl;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "student" << i + 1 << ": ";
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
