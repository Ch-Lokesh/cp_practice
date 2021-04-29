#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int contain8(ll n)
{
    while (n)
    {
        if (n % 10 == 8)
        {
            return 1;
        }
        n = n / 10;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    n++;
    ans++;

    while (!contain8(abs(n)))
    {
        n++;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}