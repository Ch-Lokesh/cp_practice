#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define fori(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

void solve()
{
    vector<string> s(3);

    for (int i = 0; i < 3; i++)
        cin >> s[i];

    int x = 0, o = 0;
    int e = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == 'X')
                x++;
            else if (s[i][j] == 'O')
                o++;
            else
                e++;
        }
    }
    if (o > x || x - o > 1)
    {
        cout << 3 << endl;
        return;
    }
    int xw = 0, ow = 0;
    if (s[0][0] == s[0][1] && s[0][1] == s[0][2])
    {
        if (s[0][0] == 'X')
            xw++;
        else
            ow++;
    }
    if (s[1][0] == s[1][1] && s[1][1] == s[1][2])
    {
        if (s[1][0] == 'X')
            xw++;
        else
            ow++;
    }
    if (s[2][0] == s[2][1] && s[2][1] == s[2][2])
    {
        if (s[2][0] == 'X')
            xw++;
        else
            ow++;
    }

    if (s[0][0] == s[1][0] && s[1][0] == s[2][0])
    {
        if (s[0][0] == 'X')
            xw++;
        else
            ow++;
    }
    if (s[0][1] == s[1][1] && s[1][1] == s[2][1])
    {
        if (s[0][1] == 'X')
            xw++;
        else
            ow++;
    }
    if (s[0][2] == s[1][2] && s[1][2] == s[2][2])
    {
        if (s[0][2] == 'X')
            xw++;
        else
            ow++;
    }

    if (s[0][0] == s[1][1] && s[1][1] == s[2][2])
    {
        if (s[0][0] == 'X')
            xw++;
        else
            ow++;
    }
    if (s[0][2] == s[1][1] && s[1][1] == s[2][0])
    {
        if (s[0][2] == 'X')
        {
            xw++;
        }
        else
            ow++;
    }
    if (xw > 0 && ow > 0)
    {
        cout << 3 << endl;
        return;
    }
    if (xw > 0)
    {
        if (x == o + 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 3 << endl;
            return;
        }
    }
    if (ow > 0)
    {
        if (o == x + 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 3 << endl;
            return;
        }
    }
    if (e == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}