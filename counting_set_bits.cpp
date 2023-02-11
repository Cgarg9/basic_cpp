#include <bits/stdc++.h>
using namespace std;

int setbits(int n)
{
    int i = 32;
    int count = 0;
    while (i > 0)
    {
        if ((n >> i) & 1)
        {
            count++;
        }
        i--;
    }
    return count;
}
int setbits_modified(int n)
{
    // n & (n-1) has the same bits as n except rightmost set bit
    int count = 0;
    while (n)
    {
        n &= n - 1;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << setbits(n) << "\n";
    cout << setbits_modified(n);
    return 0;
}
