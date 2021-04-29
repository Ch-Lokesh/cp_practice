#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    b[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] + a[i - 1] < k)
        {
            res += k - a[i] - a[i - 1];
            a[i] = k - a[i - 1];
            b[i] = k - a[i - 1];
        }
        else
            b[i] = a[i];
    }
    // b[n - 1] = a[n - 1];

    cout << res << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}