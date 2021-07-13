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
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << (x + MOD) % MOD << endl;
        return;
    }
    if (n == 2)
    {
        cout << (y + MOD) % MOD << endl;
        return;
    }
    switch (n % 6)
    {
    case 0:
        cout << (x - y + MOD + MOD) % MOD << endl;
        break;
    case 1:
        cout << (x + MOD) % MOD << endl;
        break;
    case 2:
        cout << (y + MOD) % MOD << endl;
        break;
    case 3:
        cout << (y - x + MOD + MOD) % MOD << endl;
        break;
    case 4:
        cout << (MOD - x) % MOD << endl;
        break;
    case 5:
        cout << (MOD - y) % MOD << endl;
        break;
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