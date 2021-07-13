#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int k = 1; k <= 6; k++)
        {
            if (i - k >= 0)
            {
                dp[i] += dp[i - k];
                dp[i] = dp[i] % MOD;
            }
            else
                break;
        }
    }
    cout << dp[n] << endl;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}