#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string s;
    cin >> s;
    int done = 0;
    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (done == 1)
        {
            res = res + s[i];
        }
        else
        {
            if (s[i] == '1' && i == (s.length() - 1))
            {
            }
            else if (s[i] == '1' && i != (s.length() - 1))
                res = res + s[i];
            else if (s[i] == '0')
            {

                done = 1;
            }
        }
    }

    if (res.size() == 0)
    {
        cout << 0 << endl;
    }
    else
        cout << res << endl;
}

int main()
{
    solve();
    return 0;
}