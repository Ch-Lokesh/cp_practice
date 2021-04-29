#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        if (a[0] == 15)
        {
            cout << "DOWN" << endl;
        }
        else if (a[0] == 0)
        {
            cout << "UP" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (a[n - 1] == 15)
        {
            cout << "DOWN" << endl;
        }
        else if (a[n - 1] == 0)
        {
            cout << "UP" << endl;
        }
        else
        {
            if (a[n - 1] > a[n - 2])
            {
                cout << "UP" << endl;
            }
            else
            {
                cout << "DOWN" << endl;
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}