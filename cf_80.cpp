#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int xorv = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        xorv = xorv ^ temp;
    }
    cout << xorv << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}