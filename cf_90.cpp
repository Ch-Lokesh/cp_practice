#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void no()
{
    cout << -1 << endl;
}

void solve()
{

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }

    vector<int> legal(n, 0);
    int z = 0, o = 0;
    int tz = 0, to = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            o++;
        else
            z++;
        if (o == z)
        {
            legal[i] = 1;
        }
        if (t[i] == '1')
        {
            to++;
        }
        else
        {
            tz++;
        }
    }
    if (to != o || tz != z)
    {
        cout << "NO" << endl;
        return;
    }
    int par = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (par)
        {
            if (s[i] == '1')
                s[i] = '0';
            else
                s[i] = '1';
        }
        if (s[i] != t[i])
        {
            if (legal[i])
            {
                s[i] = t[i];
                if (par)
                    par = 0;
                else
                    par = 1;
            }
            else
            {

                cout << "NO" << endl;
                return;
            }
        }
    }
    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}