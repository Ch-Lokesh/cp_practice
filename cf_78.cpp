#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, r;
    cin >> n >> r;
    ll res;
    if (r == 1)
    {
        res = 1;
    }
    else if (n == 1)
    {
        res = 1;
    }
    else if (n > r)
    {
        if (r % 2 == 0)
        {
            res = (r / 2) * (r + 1);
        }
        else
        {
            res = (r + 1) / 2;
            res = res * r;
        }
    }
    else
    {
        if ((n - 1) % 2 == 0)
        {
            res = (n - 1) / 2;
            res = res * n;
        }
        else
        {
            res = n / 2;
            res = res * (n - 1);
        }
        res++;
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