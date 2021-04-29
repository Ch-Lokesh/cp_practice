#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxv(int a, int b)
{
    return max(a, b);
}
int maxv(int a, int b, int c)
{
    return max(a, max(b, c));
}
int maxv(int a, int b, int c, int d)
{
    return max(a, max(b, max(c, d)));
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && b <= c)
    {
        cout << maxv(a * b * c, (a + b) * c, a + b + c) << endl;
    }
    else if (a <= b && b >= c)
    {
        cout << maxv(a * b * c, (a + b) * c, a * (b + c), a + b + c) << endl;
    }
    else if (a >= b && b <= c)
    {
        cout << maxv(a * b * c, (a + b) * c, a * (b + c), a + b + c) << endl;
    }
    else
    {
        cout << maxv(a * b * c, a * (b + c), a + b + c) << endl;
    }
}