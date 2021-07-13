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
    vector<int> a(n);
    fori(i, n)
            cin >>
        a[i];
    int f = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (a[0] == n && a[n - 1] == 1)
    {
        cout << 3 << endl;
        return;
    }
    if (a[0] == 1 || a[n - 1] == n)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;

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