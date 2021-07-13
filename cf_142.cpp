#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b, b + m);

    int i = 0, j = 0;
    int res = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            i++;
            j++;
            res++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << res << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}