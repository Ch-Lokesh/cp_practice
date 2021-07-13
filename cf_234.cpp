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

int sum(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x = x / 10;
    }
    return s;
}

int power(int x, int y)
{
    if (x == 0)
        return 0;
    if (y == 1)
        return x;
    if (y == 0)
        return 1;

    int t = power(x, y / 2);
    t = t * t;
    if (y % 2)
        t = t * x;
    return t;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> res;
    for (int sx = 1; sx <= 81; sx++)
    {
        int x = b * power(sx, a) + c;
        //cout << sx << " " << x << endl;
        if (sum(x) == sx && x < 1e9)
            res.push_back(x);
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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