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

int st[1001];

void solve()
{
    int n, m;
    cin >> n >> m;
    vpii p;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        st[a] = 1;
        st[b] = 1;
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (st[i] == 0)
        {
            break;
        }
    }
    //centered i + 1;
    cout << n - 1 << endl;
    for (int k = 1; k <= n; k++)
    {
        if (k == i + 1)
            continue;
        cout << (i + 1) << " " << k << endl;
    }
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