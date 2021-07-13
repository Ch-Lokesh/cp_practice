#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int i = 1;
    int j = 0;
    int res = 1;
    int maxres = 0;
    while (i < n && j < n)
    {
        if (a[i] <= b[j])
        {
            i++;
            res++;
            maxres = max(maxres, res);
        }
        else
        {
            res--;
            j++;
        }
    }
    while (i < n)
    {
        i++;
        res++;
        maxres = max(maxres, res);
    }
    cout << maxres << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}