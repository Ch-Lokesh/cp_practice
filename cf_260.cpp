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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int res = 1;
    for (int x = 0; a * x <= n; x++)
    {
        for (int y = 0; b * y + a * x <= n; y++)
        {
            int v = n - a * x - b * y;
            if (v % c == 0)
            {
                res = max(res, x + y + (v / c));
            }
        }
    }
    cout << res << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}