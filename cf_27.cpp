#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int res = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= res)
        {
            res++;
        }
    }
    cout << res - 1 << endl;
}