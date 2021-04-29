#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int cura = a;
    int curb = 0;

    int res = 0;
    res = res + cura;
    curb = cura;
    while (1)
    {
        cura = curb / b;
        curb = (curb / b) + (curb % b);

        if (cura == 0)
        {
            break;
        }
        else
        {
            res += cura;
        }
    }
    cout << res << endl;
}