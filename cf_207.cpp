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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dp(n);
    if (n <= 2)
    {
        cout << n << endl;
        return;
    }
    dp[0] = 1;
    dp[1] = 2;
    int maxv = 2;
    for (int i = 2; i < n; i++)
    {
        if (a[i - 1] + a[i - 2] == a[i])
        {
            dp[i] = dp[i - 1] + 1;
            if (dp[i] > maxv)
                maxv = dp[i];
        }
        else
        {
            dp[i] = 2;
        }
    }

    cout << maxv << endl;
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