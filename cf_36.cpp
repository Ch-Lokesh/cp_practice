#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lmin(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        ll minv = lmin(r, lmin(g, b));
        r = r - minv;
        g = g - minv;
        b = b - minv;
        w = w + 3 * minv;
        if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 3 == 0)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}