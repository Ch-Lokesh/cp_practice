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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    int sum = 0;
    fori(i, n * m)
    {
        cin >> a[i];
        sum += a[i];
    }
    int k = a[0] % d;
    for (int i = 1; i < n * m; i++)
    {
        if (a[i] % d != k)
        {
            cout << -1 << endl;
            return;
        }
    }
    sort(a.begin(), a.end());
    int med = a[(n * m) / 2];
    int res = 0;
    for (int i = 0; i < n * m; i++)
    {
        res = res + abs(a[i] - med);
    }
    res = res / d;
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