#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;

    int pre[n];

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i == 0)
            pre[i] = temp;
        else
            pre[i] = temp + pre[i - 1];
    }
    int res = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (pre[i] > x)
        {
            while (j < i)
            {
                int p = pre[i] - pre[j];
                if (p == x)
                {
                    res++;
                    break;
                }
                else if (p < x)
                {
                    break;
                }
                j++;
            }
        }
        else if (pre[i] == x)
            res++;
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