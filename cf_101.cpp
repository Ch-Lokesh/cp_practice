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

    int n;
    cin >> n;
    ll a[n];
    fori(i, n)
    {
        cin >> a[i];
    }
    int flag = 0;
    fori(i, n - 1)
    {
        if (a[i] < a[i + 1])
        {
            flag = 1;
        }
    }
    if (flag)
        Yes();
    else
        No();

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