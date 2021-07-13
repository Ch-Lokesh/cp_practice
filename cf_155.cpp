#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> dp(x + 1, 1000000000);
    dp[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= i)
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }
    //for (int i = 0; i <= x; i++)
    if (dp[x] != 1000000000)
        cout << dp[x];
    else
        cout << -1 << endl;
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