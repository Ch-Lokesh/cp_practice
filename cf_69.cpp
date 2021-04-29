#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
    }
    ll ans = (ones * 1ll * (ones + 1)) / 2;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}