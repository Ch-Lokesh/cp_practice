#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int power2(ll a)
{
    int zeros = 0;
    int ones = 0;
    while (a)
    {
        if (a % 2 == 0)
            zeros++;
        else
            ones++;

        a = a >> 1;
    }
    if (ones > 1)
    {
        return 0;
    }
    return zeros;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (b < a)
    {
        ll temp = b;
        b = a;
        a = temp;
    }
    if (b % a != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll q = b / a;
    int p = power2(q);
    if (p == 0)
    {
        cout << -1 << endl;
        return;
    }
    int res = 0;
    res = p / 3;
    int rem = p % 3;
    if (rem)
        res++;
    cout << res << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}