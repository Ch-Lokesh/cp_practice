#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int minv(int a, int b, int c)
{
    int r = min(a, b);
    int r2 = min(r, c);
    return r2;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = minv(dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]) + 1;
            }
        }
    }
    cout << dp[n][m] << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}