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

bool possible(int len, int sum)
{
    if (sum > len * 9 || sum < 0)
        return false;
    return true;
}

void solve()
{
    int m, s;
    cin >> m >> s;
    if (s == 0 && m > 1)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    int sum = s;
    string minval = "", maxval = "";
    for (int i = 0; i < m; i++)
    {
        for (int d = 0; d < 10; d++)
        {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && possible(m - i - 1, sum - d))
            {
                minval = minval + (char)('0' + d);
                sum = sum - d;
                break;
            }
        }
    }
    sum = s;
    for (int i = 0; i < m; i++)
    {
        for (int d = 9; d >= 0; d--)
        {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && possible(m - i - 1, sum - d))
            {
                maxval = maxval + (char)('0' + d);
                sum = sum - d;
                break;
            }
        }
    }

    if (minval == "00" || minval == "")
    {
        cout << -1 << " ";
    }
    else
    {
        cout << minval << " ";
    }
    if (maxval == "00" || maxval == "")
    {
        cout << -1 << endl;
    }
    else
    {
        cout << maxval << endl;
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