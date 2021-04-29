#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll a[3] = {0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a[temp % 3]++;
    }
    ll ans = 0;
    ans += a[0];
    ll minv = min(a[1], a[2]);
    ans += minv;
    a[1] -= minv;
    a[2] -= minv;
    ans += a[1] / 3;
    ans += a[2] / 3;

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}