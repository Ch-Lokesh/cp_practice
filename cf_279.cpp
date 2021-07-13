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
    vector<int> last(26, -1);
    int ans = 0;
    int l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        l = max(l, last[s[i] - 'a'] + 1);
        ans = max(ans, i - l + 1);
        cout << "for " << i << " " << l << endl;
    }
    cout << ans << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}