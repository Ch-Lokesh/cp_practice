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
    int n, m;
    cin >> n >> m;
    //getting number n from m;
    int res = 0;
    while (n != m)
    {
        if (m < n)
        {
            res += n - m;
            m = n;
        }
        else if (m > n)
        {
            if (m % 2 == 0)
            {
                m = m / 2;
                res++;
            }
            else
            {
                m = (m + 1) / 2;
                res += 2;
            }
        }
    }
    cout << res << endl;
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