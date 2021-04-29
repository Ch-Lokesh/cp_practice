#include <iostream>
using namespace std;
using ll = long long int;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a < c)
        {
            cout << 1;
        }
        else
        {
            cout << -1;
        }
        cout << " ";

        if (b * a > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}