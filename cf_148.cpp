#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curmax = 0;
    int totmax = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        curmax += a[i];
        //cout << "I = " << i << " sum " << curmax << endl;
        totmax = max(totmax, curmax);
        if (curmax < 0)
            curmax = 0;
    }
    cout << totmax << endl;
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}