#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int ans = 0;
    if (s[n - 1 - y] == '0')
        ans++;
    for (int i = n - 1; i >= n - x; i--)
    {
        if (i == n - 1 - y)
            continue;
        if (s[i] == '1')
            ans++;
    }
    cout << ans << endl;
}

int main()
{

    solve();
    return 0;
}