#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void util(vector<int> &a, int n, int i, int &res, int sum1, int sum2, int sum)
{
    if (i == n)
    {
        res = min(res, abs(sum1 - sum2));
        return;
    }
    util(a, n, i + 1, res, sum1 + a[i], sum2, sum);
    util(a, n, i + 1, res, sum1, sum2 + a[i], sum);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    int res = INT_MAX;
    util(a, n, 0, res, 0, 0, sum);
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