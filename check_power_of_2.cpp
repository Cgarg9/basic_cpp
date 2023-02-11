#include <bits/stdc++.h>
using namespace std;

bool ispower_2(int n)
{
    // 8 = 1000;
    // 8-1 = 7 = 0111;
    // 7 & 8 = 0
    return n && ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cin >> n;
    if (ispower_2(n))
    {
        cout << n << " is a power of 2\n";
    }
    else
    {
        cout << n << " is not a power of 2\n";
    }
    return 0;
}
