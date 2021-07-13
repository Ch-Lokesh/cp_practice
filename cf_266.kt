#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << (n / 2) << " " << (n / 2) << endl;
            continue;
        }

        ll g = sqrt(n), p = -1, q;
        for (ll i = g; i >= 2; i--)
        {
            if (n % i == 0)
            {
                p = max(p, max(i, n / i));
            }
        }
        if (p == -1)
        {
            cout << (1) << " " << (n - 1) << endl;
        }
        else
            cout << (p) << " " << (n - p) << endl;
    }
}

