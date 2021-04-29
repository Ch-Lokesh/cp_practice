#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    int len = 0;
    for (int i = n; i >= 1; i--)
    {
        res += i + (i - 1) * len;
        len++;
    }
    cout << res << endl;
    return 0;
}