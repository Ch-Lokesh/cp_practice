#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void solve()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < (int)s.size(); i++)
    {
        a[s[i] - 'A']++;
    }
    int odds = 0;
    int oddchar;

    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2)
        {
            odds++;
            oddchar = i;
        }
    }
    string res = "";
    if (odds > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    else
    {

        if (odds)
        {
            res = res + (char)('A' + oddchar);
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] > 0)
            {
                int sz = a[i] / 2;
                vector<char> v(sz, (char)('A' + i));
                string temp(v.begin(), v.end());
                res = temp + res;
                res = res + temp;
            }
        }
    }
    cout << res << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}