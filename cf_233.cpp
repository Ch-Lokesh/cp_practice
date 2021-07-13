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
    vi a(n);
    fori(i, n)
            cin >>
        a[i];
    vi dp(n);

    dp[n - 1] = 1;
    unordered_set<int> st;
    st.insert(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (st.find(a[i]) == st.end())
        {
            st.insert(a[i]);
            dp[i] = dp[i + 1] + 1;
        }
        else
        {
            dp[i] = dp[i + 1];
        }
    }
    fori(i, m)
    {
        int t;
        cin >> t;
        t--;
        cout << dp[t] << endl;
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