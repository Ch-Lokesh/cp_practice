#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int check(int r, int g, int b, int w)
{
    int ans = r % 2 + g % 2 + b % 2 + w % 2;
    if (ans > 1)
        return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        if (check(r, g, b, w))
            cout << "Yes" << endl;
        else if (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}