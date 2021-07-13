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
    int minv = INT_MAX;
    int maxv = INT_MIN;
    int minc = 0;
    int maxc = 0;

    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < minv)
        {
            minv = t;
            minc = 1;
        }
        else if (t == minv)
        {
            minc++;
        }
        if (t > maxv)
        {
            maxv = t;
            maxc = 1;
        }
        else if (t == maxv)
        {
            maxc++;
        }
    }
    if (minv == maxv)
    {
        cout << maxv - minv << " " << ((n) * (n - 1)) / 2 << endl;
    }
    else
        cout << maxv - minv << " " << minc * maxc << endl;

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