#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forin(i, n) for (int i = 0; i < int(n); i++)
#define forlln(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

ll powerof(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n % MOD;

    if (k % 2 == 0)
    {
        ll temp = powerof(n, k / 2);
        temp = temp % MOD;
        temp = (temp * temp) % MOD;
        return temp;
    }
    else
    {
        ll temp = powerof(n, k / 2);
        temp = (temp) % MOD;
        temp = (temp * temp * n) % MOD;
        return temp;
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll power = 1;
    forin(i, k)
    {
        power = (power * n) % MOD;
    }
    cout << power << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}