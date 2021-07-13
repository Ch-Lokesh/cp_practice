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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int minv = a[0];
    int maxv = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxv)
            maxv = a[i];
        if (a[i] < minv)
            minv = a[i];
    }
    if (maxv > minv + k)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < minv; j++)
            {
                cout << 1 << " ";
            }
            for (int j = minv; j < a[i]; j++)
            {
                cout << j - minv + 1 << " ";
            }
            cout << endl;
        }
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