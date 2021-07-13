#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int maxSum = 1000 * n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<int>> dp(n + 1, vector<int>(maxSum + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= maxSum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int left = j - a[i - 1];
            if (left >= 0 && dp[i - 1][left])
                dp[i][j] = true;
        }
    }
    vector<int> res;
    for (int i = 1; i <= maxSum; i++)
    {
        if (dp[n][i])
            res.push_back(i);
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}