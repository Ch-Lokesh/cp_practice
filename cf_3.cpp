#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q, r;
        cin >> p >> q >> r;
        x += p;
        y += q;
        z += r;
    }
    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}