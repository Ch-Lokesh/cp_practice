#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    int res = 0;
    int start = 0;
    for (int last = 0; last < n; last++)
    {
        if (mp.find(a[last]) != mp.end())
        {
            start = max(start, mp[a[last]] + 1);
        }
        mp[a[last]] = last;
        res = max(res, last - start + 1);
    }

    cout << res << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}