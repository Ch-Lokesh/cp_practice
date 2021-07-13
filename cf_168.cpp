#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int req = (n * (n + 1)) / 2;
    if (req % 2)
    {
        cout << 0 << endl;
        return;
    }
    req = req / 2;

    vector<vector<int>> dp(n, vector<int>(req + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= req; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - i;
            if (left >= 0)
            {
                dp[i][j] += dp[i - 1][left];
            }
            dp[i][j] = dp[i][j] % MOD;
        }
    }
    cout << dp[n - 1][req] << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}