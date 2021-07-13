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
    if (m == 0)
    {
        cout << n << " " << n << endl;
        return;
    }
    int minv = n - 2 * m;
    minv = minv < 0 ? 0 : minv;
    int i = 2;
    for (i = 2; i <= n; i++)
    {
        int t = (i * (i - 1)) / 2;
        if (t >= m)
        {
            break;
        }
    }
    int maxv = n - i;
    cout << minv << " " << maxv << endl;
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