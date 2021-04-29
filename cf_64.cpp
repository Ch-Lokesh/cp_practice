#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll res = 0;

    ll t = 2;
    for (int i = 1; i <= n; i++)
    {
        res = res + t;
        t = t * 2;
    }
    cout << res << endl;
}

int main()
{
    solve();
    return 0;
}