#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    ll res = 0;

    for (int i = 1; i < len; i++)
    {
        res = res + (1 << i);
    }
    ll dum = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '4')
        {
            dum = dum * 2 + 0;
        }
        else
            dum = dum * 2 + 1;
    }
    res = res + dum;
    cout << res + 1 << endl;
}

int main()
{
    solve();
    return 0;
}