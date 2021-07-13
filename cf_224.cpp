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
    int n;
    cin >> n;
    int maxs = 0;
    int flag = 0;
    for (int s = 0; 7 * s <= n; s++)
    {
        if ((n - 7 * s) % 4 == 0)
        {
            maxs = s;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
        return;
    }
    n = n - 7 * maxs;
    int f = n / 4;
    for (int i = 0; i < f; i++)
        cout << 4;
    for (int i = 0; i < maxs; i++)
        cout << 7;
    cout << endl;
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