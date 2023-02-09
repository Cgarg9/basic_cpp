searching for a number in a sorted array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2 = 0;
    cin >> n1 >> n2;
    int m1[n1][n2];
    int target;
    cin >> target;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    int r = 0, c = n2 - 1;
    bool found = false;
    while (r < n1 && c >= 0)
    {
        if (m1[r][c] == target)
        {
            found = true;
            break;
        }
        else if (m1[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found == true)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    // to print matrix
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n2; j++)
    //     {
    //         cout << m1[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    return 0;
}
