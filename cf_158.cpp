#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= min(n, (int)9); i++)
        dp[i] = 1;

    for (int i = 10; i <= n; i++)
    {
        dp[i] = 1000000000;
        int j = i;
        while (j > 0)
        {
            int t = j % 10;
            dp[i] = min(dp[i], dp[i - t] + 1);
            j = j / 10;
        }
    }
    cout << dp[n] << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}