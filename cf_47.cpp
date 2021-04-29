#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int po = 0, pc = 0, so = 0, sc = 0;
    int p = 0, sb = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            po++;
        else if (s[i] == '[')
            so++;
        else if (s[i] == ')' && po > 0)
        {
            po--;
            p++;
        }
        else if (s[i] == ']' && so > 0)
        {
            so--;
            sb++;
        }
    }
    cout << p + sb << endl;
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