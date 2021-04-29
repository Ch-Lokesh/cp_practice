#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int x, y;
    cin >> x >> y;
    if (abs(x - y) <= 1)
    {
        cout << x + y << endl;
    }
    else
    {
        int dif = abs(x - y);
        cout << x + y + dif - 1 << endl;
    }
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