#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << s << endl;
        return;
    }
    int i = 0;
    int n = s.size();
    int a[26];
    memset(a, 0, sizeof(a));

    while (i < n)
    {
        if (i == n - 1)
        {
            a[s[i] - 'a'] = 1;
            i++;
        }
        else
        {
            if (s[i] == s[i + 1])
                i = i + 2;
            else
            {
                a[s[i] - 'a'] = 1;
                i++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i])
            cout << (char)('a' + i);
    }
    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}