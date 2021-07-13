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

bool ok(int t)
{
    int a[10] = {0};
    while (t > 0)
    {
        int d = t % 10;
        t = t / 10;
        if (a[d] == 1)
            return false;
        a[d] = 1;
    }
    return true;
}

void solve()
{
    int t;
    cin >> t;
    while (1)
    {
        t++;
        if (ok(t))
        {
            cout << t << endl;
            return;
        }
    }
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}