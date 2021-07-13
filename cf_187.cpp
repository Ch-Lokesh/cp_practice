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

int countBits(int n)
{
    int res = 0;
    while (n)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        int t = a[i] ^ a[m];
        int b = countBits(t);
        if (b <= k)
            res++;
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