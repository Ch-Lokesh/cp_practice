#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int dp[n + 1][m + 1];
    memset(dp, -1000000000, sizeof(dp));
    dp[0][0] = 0;
    int ans = 0;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i < n)
            {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + a[i]);
            }
            if (j < m)
            {
                dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + b[j]);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}