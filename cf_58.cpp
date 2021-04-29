#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1)
            res++;
    }
    cout << res << endl;
}

int main()
{

    solve();
    return 0;
}