#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int cards = n / k;
        if (m <= cards)
        {
            cout << m << endl;
        }
        else
        {
            if (m == n)
            {
                cout << 0 << endl;
            }
            else if (m > cards + (k - 1) * (cards - 1))
            {
                cout << 0 << endl;
            }
            else
            {
                int y = (m - cards) / (k - 1);
                y += (m - cards) % (k - 1) > 0 ? 1 : 0;
                cout << cards - y << endl;
            }
        }
    }
    return 0;
}