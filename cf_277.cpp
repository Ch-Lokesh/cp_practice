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
    int oo = 0, oe = 0, eo = 0;
    fori(i, n)
    {
        int a, b;
        cin >> a >> b;

        if (a % 2 && b % 2)
        {
            oo++;
        }
        else if (a % 2 == 1 && b % 2 == 0)
        {
            oe++;
        }
        else if (a % 2 == 0 && b % 2 == 1)
        {
            eo++;
        }
    }
    if (oo % 2)
    {
        cout << -1 << endl;
        return;
    }
    if ((oe + eo) % 2)
    {
        cout << -1 << endl;
        return;
    }
    if (oe % 2 && oe % 2)
    {
        cout << 1 << endl;
        return;
    }
    cout << 0 << endl;
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