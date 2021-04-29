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
    int a[n];
    fori(i, n)
    {
        cin >> a[i];
    }
    int len = (1 << n) - 1;
    for (int i = 0; i <= len; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum = sum - a[j];
            }
            else
            {
                sum = sum + a[j];
            }
        }
        if (sum % 360 == 0)
        {
            YES();
            return;
        }
    }
    NO();

    return;
}

int main()
{

    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}