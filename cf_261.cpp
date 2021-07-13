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
    if (m == 1)
    {
        cout << (n * (n - 1)) / 2 << " " << (n * (n - 1)) / 2 << endl;
        return;
    }
    int r = n % m;
    int res = 0;
    int q = n / m;
    for (int i = 0; i < r; i++)
    {
        res += (q * (q + 1)) / 2;
    }
    for (int i = r; i < m; i++)
    {
        res += (q * (q - 1)) / 2;
    }

    int maxv = 1;
    int v = n - (m - 1);
    maxv = (v * (v - 1)) / 2;
    cout << res << " " << maxv << endl;

    return;
}

int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}