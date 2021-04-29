#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll res = 0;

    if (n <= k)
    {
        if (k % n == 0)
        {
            res = k / n;
        }
        else
            res = k / n + 1;
    }

    else
    {
        if (k == 1)
        {
            res = 1;
        }
        else
            res = 2;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}