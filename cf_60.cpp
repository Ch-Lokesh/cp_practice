#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll a[5];
    ll b[5];

    ll q = n / 5;
    a[0] = a[1] = a[2] = a[3] = a[4] = q;
    ll q2 = m / 5;
    b[0] = b[1] = b[2] = b[3] = b[4] = q2;

    for (ll i = 1; i <= n % 5; i++)
    {
        a[i]++;
    }
    for (ll i = 1; i <= m % 5; i++)
    {
        b[i]++;
    }

    ll ans = a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1];
    cout << ans << endl;
    return;
}

int main()
{

    solve();
    return 0;
}