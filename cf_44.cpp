#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    ll n;
    cin >> n;
    ll a[n], b[n - 1], c[n - 2];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }
    int one = 0, two = 0;
    for (int i = 0; i < n - 1; i++)
    {
        one = one ^ a[i] ^ b[i];
    }
    one = one ^ a[n - 1];
    cout << one << endl;

    for (int i = 0; i < n - 2; i++)
    {
        two = two ^ b[i] ^ c[i];
    }
    two = two ^ b[n - 2];
    cout << two << endl;
    return 0;
}