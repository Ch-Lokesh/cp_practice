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
    string s;
    cin >> s;
    int k;
    cin >> k;
    int maxv = 0;
    int a[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
        maxv = max(maxv, a[i]);
    }
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = res + a[s[i] - 'a'] * (i + 1);
    }
    int n = s.size();
    for (int i = 1; i <= k; i++)
    {
        res = res + maxv * (n + i);
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