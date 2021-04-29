#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    int flag = 0;

    if (s < n && b < s)
        flag = 1;
    else if (s >= n)
    {
        if (a * n <= s)
        {
            if (b < s - a * n)
                flag = 1;
        }
        else
        {
            int rem = s % n;
            if (rem > b)
                flag = 1;
        }
    }
    if (flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}