#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll check = k - 1;
    if (k == n)
    {
        cout << a[n - 1] << endl;
    }
    else if (k == 0)
    {
        if (a[0] == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
        if (a[check] < a[check + 1])
        {
            cout << a[check] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}