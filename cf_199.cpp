#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define fori(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

void solve()
{
    int n, m;
    cin >> n >> m;

    int t, k;
    if (n > m + 1 || (m > (n + 1) * 2))
    {
        cout << -1 << endl;
        return;
    }
    if (n == m + 1)
    {
        cout << "0";
        for (int i = 0; i < m; i++)
        {
            cout << "10";
        }
        cout << endl;
    }
    else if (m > 2 * n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "110";
        }
        for (int i = 0; i < m - 2 * n; i++)
            cout << "1";
        cout << endl;
    }
    else
    {
        t = m - n;
        for (int i = 0; i < t; i++)
        {
            cout << "011";
        }
        for (int i = t; i < n; i++)
        {
            cout << "01";
        }
        cout << endl;
    }

    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //  cin >> t;
    while (t--)
        solve();
}