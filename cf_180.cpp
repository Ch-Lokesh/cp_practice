#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int inf = 1e9 + 5;

void solve()
{
    int n;
    cin >> n;
    vpii a(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());
    if (a[0].ff != a[1].ff)
        cout << a[0].ss << endl;
    else
    {
        cout << a[n - 1].ss << endl;
    }
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