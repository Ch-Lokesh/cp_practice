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

    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (s[start] == '0')
        {
            if (s[end] == '0')
            {
                a -= 2;
            }
            else if (s[end] == '1')
            {
                no();
                return;
            }
            else
            {
                s[end] = '0';
                a -= 2;
            }
        }
        else if (s[start] == '1')
        {
            if (s[end] == '1')
            {
                b -= 2;
            }
            else if (s[end] == '?')
            {
                s[end] = '1';
                b = b - 2;
            }
            else
            {
                no();
                return;
            }
        }
        if (s[end] == '0')
        {
            if (s[start] == '?')
            {
                s[start] = '0';
                a = a - 2;
            }
        }
        else if (s[end] == '1')
        {

            if (s[start] == '?')
            {
                s[start] = '1';
                b = b - 2;
            }
        }
        start++;
        end--;
    }
    if (a < 0 || b < 0)
    {
        no();
        return;
    }
    start = 0;
    end = s.size() - 1;
    while (start < end)
    {
        if (s[start] == '?')
        {
            if (a > 1)
            {
                s[start] = s[end] = '0';
                a = a - 2;
            }
            else if (b > 1)
            {
                s[start] = s[end] = '1';
                b = b - 2;
            }
            else
            {
                no();
                return;
            }
        }
        start++;
        end--;
    }
    if (s.size() % 2 == 1)
    {
        if (s[s.size() / 2] == '?')
        {
            if (a == 1)
            {
                a--;
                s[s.size() / 2] = '0';
            }
            else if (b == 1)
            {
                b--;
                s[s.size() / 2] = '1';
            }
            else
            {
                no();
                return;
            }
        }
        else if (s[s.size() / 2] == '0')
        {
            a--;
        }
        else
        {
            b--;
        }
    }

    start = 0;
    end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            no();
            return;
        }
        start++;
        end--;
    }

    if (a == 0 && b == 0)
        cout << s << endl;
    else
    {
        //cout << "l" << endl;
        no();
    }

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

//?01??110??011?0?01 001111101101111100 101011101101110101