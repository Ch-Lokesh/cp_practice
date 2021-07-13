#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, sum = 0, res = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        sum += b - a;
        res = max(res, sum);
    }
    cout << res;
    return 0;
}