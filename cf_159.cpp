#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dp[n][n];

    memset(dp, 0, sizeof(dp));
    if (a[0][0] == '.')
        dp[0][0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[0][i] == '.')
            dp[0][i] = dp[0][i - 1];
        else
            dp[0][i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i][0] == '.')
            dp[i][0] = dp[i - 1][0];
        else
            dp[i][0] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] == '*')

                dp[i][j] = 0;
            else
            {

                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
            dp[i][j] = dp[i][j] % MOD;
        }
    }

    cout << dp[n - 1][n - 1] << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}