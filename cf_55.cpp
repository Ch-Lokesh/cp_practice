#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll diff = r - l;
    if (diff < 2)
    {
        cout << -1 << endl;
    }
    else if (diff == 2 && l % 2 == 1)
    {
        cout << -1 << endl;
    }
    else if (diff == 2 && l % 2 == 0)
    {
        cout << l << " " << l + 1 << " " << r << endl;
    }
    else
    {
        ll rem = l % 2;
        cout << l + rem << " " << l + 1 + rem << " " << l + 2 + rem << endl;
    }
}

int main()
{
    solve();
    return 0;
}