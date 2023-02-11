// generating subsets using the concept of bit masking.
#include <bits/stdc++.h>
using namespace std;

void subsets(int arr[], int n)
{
//   going upto 2**n as ( 2**n - 1 ) possible subsets.
    for (int i = 0; i < 1 << n; i++)
    {
//      checking to see which bits are set in i.
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);
    return 0;
}
