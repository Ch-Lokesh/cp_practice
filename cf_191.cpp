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
    string s;
    cin >> s;
    int f = 1;
    int maxp = -1;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int v = s[i] - '0';
        if (s[i] % 2 == 0)
            maxp = 1;
    }
    if (maxp == -1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int v = s[i] - '0';
        int l = s[n - 1] - '0';
        if (v % 2 == 0 && v < l)
        {
            swap(s[i], s[n - 1]);
            cout << s << endl;
            return;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        int v = s[i] - '0';
        int l = s[n - 1] - '0';
        if (v % 2 == 0 && v > l)
        {
            swap(s[i], s[n - 1]);
            cout << s << endl;
            return;
        }
    }

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