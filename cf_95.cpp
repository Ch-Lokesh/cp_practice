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

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (b >= m * a)
    {
        cout << n * a << endl;
        return;
    }
    if (m >= n)
    {
        if (b <= a * n)
        {
            cout << b << endl;
        }
        else
        {
            cout << a * n << endl;
        }
        return;
    }
    int res = 0;
    res = res + (n / m) * b;
    int rem = n % m;
    res = res + min(b, rem * a);
    cout << res << endl;
    return;
}

int main()
{

    int t = 1;
    //cin>>t;
    while (t--)
        solve();
    return 0;
}