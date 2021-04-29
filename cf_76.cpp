#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int first = -1, last = -1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        if (temp % x != 0)
        {
            if (flag == 0)
            {
                first = i;
                flag = 1;
            }
            last = i;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
    else if (sum % x != 0)
    {
        cout << n << endl;
    }
    else
    {
        int res = n - min(first + 1, n - last);
        cout << res << endl;
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}