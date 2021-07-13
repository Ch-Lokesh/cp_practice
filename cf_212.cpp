#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define fori(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> a;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        t--;
        a[t].push_back(i);
        st.insert(t);
    }
    vpii res;
    for (auto it : st)
    {
        if (a[it].size() == 1)
        {
            res.push_back({it + 1, 0});
        }
        else
        {
            int d = a[it][1] - a[it][0];
            int f = 0;
            for (int i = 2; i < a[it].size(); i++)
            {
                if (a[it][i] - a[it][i - 1] != d)
                {
                    f = 1;
                }
            }
            if (!f)
            {
                res.push_back({it + 1, d});
            }
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}