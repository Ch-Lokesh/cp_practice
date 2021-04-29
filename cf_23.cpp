#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int p;
    cin >> p;
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int ans = 1;
    while (p > 0)
    {
        p = p - a[i];
        ans = i + 1;
        i = (i + 1) % 7;
    }
    cout << ans << endl;
    return 0;
}