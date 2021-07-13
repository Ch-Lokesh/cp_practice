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
    int fo = 0, se = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            fo++;
        else if (s[i] == '7')
            se++;
    }
    if (fo == 0 && se == 0)
    {
        cout << -1 << endl;
        return;
    }
    else if (fo > se)
    {
        cout << 4 << endl;
        return;
    }
    else if (se > fo)
    {
        cout << 7 << endl;
        return;
    }
    else
    {
        cout << 4 << endl;
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