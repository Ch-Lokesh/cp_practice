#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void no()
{
    cout << -1 << endl;
}

void solve()
{

    ll n, k;
    cin >> n >> k;
    if (n % 2 == 1)
    {
        cout << 1 << " " << n / 2 << " " << n / 2 << endl;
    }
    else if (n % 4)
    {
        cout << 2 << " " << (n / 2) - 1 << " " << (n / 2) - 1 << endl;
    }
    else
    {
        cout << (n / 2) << " " << (n / 4) << " " << n / 4 << endl;
    }
    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}