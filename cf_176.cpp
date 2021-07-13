#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    int pre[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    pre[0] = a[0];

    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + a[i];

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            b--;
            cout << pre[b] << endl;
        }
        else
        {
            a--;
            b--;
            cout << pre[b] - pre[a - 1] << endl;
        }
    }
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //    cin >> t;
    while (t--)
        solve();
}