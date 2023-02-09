#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // creating transpose of matrix
    // work for either the upper or lower triangular matrix
    // because of square matrix.
    int arr_01[n][m];
    // creating a duplicate of the given matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr_01[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            // swap(arr_01[i][j], arr_01[j][i]);
            int temp = arr_01[i][j];
            arr_01[i][j] = arr_01[j][i];
            arr_01[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr_01[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}