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

    ll n, k;
    cin >> n >> k;
    while (k % 2 == 0)
    {
        k = k / 2;
    }
    int flag = 0;

    fori(i, n)
    {
        ll temp;
        cin >> temp;
        if (flag == 0 && temp % k != 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        NO();
    }
    else
        YES();
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