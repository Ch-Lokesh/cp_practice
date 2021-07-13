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
    int n, r, avg;
    cin >> n >> r >> avg;
    int sum = 0;
    vi a(n);
    vpii b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i].first;
        b[i].second = i;
        sum += a[i];
    }
    int extra = avg * n - sum;
    if (extra <= 0)
    {
        cout << 0 << endl;
        return;
    }
    int res = 0;
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        //cout << extra << endl;
        int raise = min(r - a[b[i].second], extra);
        extra = extra - raise;
        res = res + raise * (b[i].first);
        if (extra <= 0)
            break;
    }
    cout << res << endl;

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