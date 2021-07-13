#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        p.push_back({a, i});
    }
    sort(p.begin(), p.end());

    int start = 0, end = n - 1;
    while (start < end)
    {
        int t = p[start].first + p[end].first;
        if (t == x)
        {
            cout << p[start].second + 1 << " " << p[end].second + 1 << endl;
            return;
        }
        else if (t > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}