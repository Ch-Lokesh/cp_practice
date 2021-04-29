#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int res = 0;
    int left = 0, right = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
            left++;
        else
            right++;
        if (left > right)
        {
            left--;
            res++;
        }
    }
    cout << res << endl;
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