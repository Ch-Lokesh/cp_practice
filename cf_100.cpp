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

    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
    }
    int evens = 0, odds = 0;
    int twos = 0;

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 1)
        {
            twos += (a[i]) / 2;
            a[i] = a[i] % 2;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            if (twos > 0)
            {
                twos--;
            }
            else
            {
                NO();
                return;
            }
        }
    }
    YES();

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