#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    int c = 0, o = 0;
    int flag = 0;
    int n = s.size() / 2;
    int oseen = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
        {
            if (o < n - 1 && oseen == 0)
                o++;
            else if (o < n && oseen == 1)
                o++;
            else
                c++;
        }
        else if (s[i] == '(')
        {
            oseen = 1;
            o++;
        }
        else
            c++;
        if (c > o)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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