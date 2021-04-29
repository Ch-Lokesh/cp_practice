#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll min(ll a, ll b, ll c)
{
    return min(a, min(b, c));
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << min(a, b, (a + b) / 3) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}