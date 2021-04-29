#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
        {
            z++;
        }
        else
            res++;
    }
    if (res >= 9 && z > 0)
    {
        for (int i = 0; i < 9 * (res / 9); i++)
        {
            cout << 5;
        }
        for (int i = 0; i < z; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
    else if (z > 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}