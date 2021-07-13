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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    fori(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int p = a[k - 1];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] >= p)
            res++;
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