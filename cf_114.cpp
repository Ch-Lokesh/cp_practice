#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void neg()
{
    cout << -1 << endl;
}
void No()
{
    cout << "No" << endl;
}
void NO()
{
    cout << "NO" << endl;
}
void YES()
{
    cout << "YES" << endl;
}
void Yes()
{
    cout << "Yes" << endl;
}

void solve()
{

    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int s1 = 0, s0 = 0, p1 = 0, p0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            s0++;
        }
        else
        {
            s1++;
        }
        if (p[i] == '0')
        {
            p0++;
        }
        else
        {
            p1++;
        }
    }
    if (s0 != p0 || (s1 != p1))
    {
        No();
        return;
    }
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (p[i] == '0' && s[i] == '1')
        {
            c++;
        }
        else if (p[i] == '1' && s[i] == '0')
        {
            if (c > 0)
            {
                c--;
            }
            else
            {
                No();
                return;
            }
        }
    }
    Yes();

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