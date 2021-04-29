#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}

void solve()
{
    ll n, t, c;
    cin >> n >> t >> c;
    vector<ll> a;
    a.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp > t)
            a.push_back(i);
    }

    a.push_back(n);

    ll ans = 0;
    for (ll i = 1; i < ll(a.size()); i++)
    {
        ll diff = a[i] - a[i - 1] - 1;
        ans += max(diff - c + 1, 0);
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}