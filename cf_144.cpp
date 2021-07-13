#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> t(m);
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    sort(h.begin(), h.end());

    int i = 0;
    int j = 0;
    int res = 0;
    while (i < n && j < m)
    {
        auto f = find(t.begin() + i, t.end(), h[j]);
        
        if (f != t.end())
        {
            i = f - t.begin() + 1;
            cout << t[f - t.begin()] << endl;
            res++;
            continue;
        }
        else
        {
            auto it = upper_bound(t.begin() + i, t.end(), h[j]);
            if ((it - t.begin()) == (int)t.size())
            {
                break;
            }
            else
            {
                res++;
                i = it - t.begin() + 1;
                cout << t[it - t.begin()] << endl;
            }
        }
    }
    while (res < m)
    {
        cout << -1 << endl;
        res++;
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