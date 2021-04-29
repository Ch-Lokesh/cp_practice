#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ll a, b, s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    if (a + b > s)
    {
        cout << "No" << endl;
    }
    else if (a + b == s)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if ((s - (a + b)) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}