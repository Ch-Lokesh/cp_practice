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
    int res = 1;
    int maxr = 1;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (i == 0)
        {
            prev = t;
        }
        else
        {
            if (prev == t)
            {
                res++;
                maxr = max(maxr, res);
            }
            else
            {
                prev = t;
                res = 1;
            }
        }
    }
    cout << maxr << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}