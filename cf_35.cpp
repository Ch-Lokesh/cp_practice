#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int flag = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        ll large = a[i];
        if (a[i - 1] + a[i - 2] > large)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}