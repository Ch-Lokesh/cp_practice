#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int elem = a[i].first;
        int start = i + 1;
        int end = n - 1;
        while (start < end)
        {
            int cur = elem + a[start].first + a[end].first;
            if (cur == x)
            {
                cout << a[i].second + 1 << " " << a[start].second + 1 << " " << a[end].second + 1 << " " << endl;
                return;
            }
            else if (cur > x)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}