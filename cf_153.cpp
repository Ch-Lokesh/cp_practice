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
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int start = j + 1;
            int end = n - 1;
            int cur = a[i].first + a[j].first;
            int tar = x - (cur);

            while (start < end)
            {
                int icur = a[start].first + a[end].first;
                if (icur == tar)
                {
                    cout << a[i].second + 1 << " " << a[j].second + 1 << " " << a[start].second + 1 << " " << a[end].second + 1 << " " << endl;
                    return;
                }
                else if (icur > tar)
                    end--;
                else
                    start++;
            }
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