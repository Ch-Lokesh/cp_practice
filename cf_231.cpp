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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2 - x1;
    int dy = y2 - y1;
    //cout << dx << " " << dy << endl;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (ans == -1 && dx == 0 && dy == 0)
        {
            ans = i;
        }
        char c;
        cin >> c;
        if (c == 'N' && dy > 0)
            dy--;
        else if (c == 'S' && dy < 0)
        {
            dy++;
        }
        else if (c == 'E' && dx > 0)
            dx--;
        else if (c == 'W' && dx < 0)
            dx++;
    }
    if (ans == -1 && dx == 0 && dy == 0)
    {
        ans = n;
    }
    cout << ans << endl;
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