#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

    ll n, k;
    cin >> n >> k;
    int y = (int)sqrt(9 + 8 * (n + k));
    y = y - 3;
    y = y / 2;
    int x = n - y;
    cout << x << endl;
    return 0;
}