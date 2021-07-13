#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void util(int a, int b, int c, vector<pair<int, int>> &res, int n)
{
    if (n == 1)
    {
        res.push_back(make_pair(a, c));
        return;
    }
    util(a, c, b, res, n - 1);
    res.push_back(make_pair(a, c));
    util(b, a, c, res, n - 1);
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> res;
    util(1, 2, 3, res, n);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }

    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}