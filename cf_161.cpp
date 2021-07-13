#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;
    int dp[n + 1][x + 1];
    memset(dp, 0, sizeof(dp));
    int wt[n];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - wt[i - 1]] + v[i - 1]);
            }
            else
                dp[i][j] = dp[i - 1][j];

            dp[i][j] = dp[i][j] % MOD;
        }
    }

    cout << dp[n][x] << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}