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
    unordered_map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        int l1 = a.size();
        int l2 = mp[a].size();
        if (l2 < l1)
        {
            cout << mp[a] << " ";
        }
        else
        {
            cout << a << " ";
        }
    }
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