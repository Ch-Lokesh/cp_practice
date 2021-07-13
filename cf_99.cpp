#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void neg()
{
    cout << -1 << endl;
}
void No()
{
    cout << "No" << endl;
}
void NO()
{
    cout << "NO" << endl;
}
void YES()
{
    cout << "YES" << endl;
}
void Yes()
{
    cout << "Yes" << endl;
}

bool isPrime(ll n)
{
    if (n == 2)
        return true;
    for (ll i = 2; i <= (ll)(sqrt(n)); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{

    ll l, r;
    cin >> l >> r;
    ll i = r + 1;
    while (1)
    {
        if (isPrime(i))
            break;
        i++;
    }
    cout << i << endl;

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