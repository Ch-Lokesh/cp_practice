#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string j, s;
    cin >> j >> s;
    unordered_set<char> a, b;
    for (int i = 0; i < j.size(); i++)
        a.insert(j[i]);

    for (int i = 0; i < s.size(); i++)
    {
        b.insert(s[i]);
    }
    int res = 0;
    unordered_set<char>::iterator it;
    for (it = b.begin(); it != b.end(); it++)
    {
        if (a.find(*it) != a.end())
            res++;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}