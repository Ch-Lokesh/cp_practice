#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    int st = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (st && s[i] == 'B')
            st--;
        else
            st++;
    }
    cout << st << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}