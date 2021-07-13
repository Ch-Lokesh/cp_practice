#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    int mid = p[n / 2];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res + abs(p[i] - mid);
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