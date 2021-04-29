#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int p, q;
    int k = 1;
    if (n < m)
    {
        cout << -1 << endl;
    }
    else
    {
        int flag = 0;
        while (1)
        {
            p = 2 * k * m - n;
            q = n - k * m;
            if (p >= 0 && q >= 0)
            {
                break;
            }
            if (p > 0 && q < 0)
            {
                flag = 1;
                break;
            }
            k++;
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
            cout << p + q << endl;
    }
    return 0;
}