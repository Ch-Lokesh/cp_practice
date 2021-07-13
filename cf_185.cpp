
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << 0 << "\n";
        else if (i == 2)
            cout << 6 << "\n";
        else
        {
            int p = i * i;
            int j = i - 2, k = p * (p - 1) / 2;
            k -= 8 * j * (j + 1) / 2;
            cout << k << "\n";
        }
    }
}