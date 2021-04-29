#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int start = 0;
    int end = n - 1;
    int a[n];
    int t = n;
    while (start < end)
    {
        a[start] = t;
        a[end] = t - 1;
        t = t - 2;
        start++;
        end--;
    }
    if (n % 2 == 1)
    {
        a[n / 2] = t;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}