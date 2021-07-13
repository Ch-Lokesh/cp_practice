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

void solve()
{

    ll a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    ll k;
    cin >> k;

    for (int i = 9; i >= 0; i--)
    {

        if (a[i] > k)
        {
            cout << i + 1 << endl;
            return;
        }
        k = k - a[i];
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