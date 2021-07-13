#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> dp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it == dp.end())
        {
            dp.push_back(x);
        }
        else
        {
            *it = x;
        }
    }
    cout << dp.size() << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}