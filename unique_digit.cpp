// Given an array of integers where every integer occurs twice except for one. Print that digit.
// a ^ a = 0
#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    cout << unique(arr, 11);
    return 0;
}
