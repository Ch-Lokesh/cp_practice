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

static bool compare(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if (a.first.first == b.first.first)
    {
        return a.first.second > b.first.second;
    }
    else
    {
        return a.first.first < b.first.first;
    }
}

void solve()
{
    int n;
    cin >> n;
    pii res = make_pair(INT_MAX, INT_MIN);
    int resi = -1;
    vector<pair<pair<int, int>, int>> a(n);
    int maxs = -1;
    fori(i, n)
    {
        int l, r;
        cin >> l >> r;
        pii p1 = make_pair(l, r);
        a[i].first = p1;
        a[i].second = i;
        maxs = max(maxs, r);
    }
    sort(a.begin(), a.end(), compare);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].first.first << " " << a[i].first.second << " " << a[i].second << endl;
    // }
    if (maxs <= a[0].first.second && a[0].first.second >= a[n - 1].first.second)
    {
        cout << a[0].second + 1 << endl;
    }
    else
        cout << -1 << endl;
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