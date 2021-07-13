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
    int n, k;
    cin >> n >> k;
    int res = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        res = res + i;
        if (res >= k)
            break;
    }
    int r = n - 2 - i + 1;
    int v = (i * (i - 1)) / 2;
    int ex = k - (v + 1);
    int m = n - 2 - r - ex;
    int l = n - 2 - r - m;
    for (int k = 0; k < r; k++)
        cout << "a";
    cout << "b";
    for (int k = 0; k < m; k++)
        cout << "a";
    cout << "b";
    for (int k = 0; k < l; k++)
        cout << "a";
    //cout << r << " " << m << " " << l << endl;
    cout << endl;
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