#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<string> s(4);
    for (int i = 0; i < 4; i++)
        cin >> s[i];
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int o = 0, t = 0;
            if (s[i][j] == '#')
                o++;
            else
                t++;
            if (s[i][j + 1] == '#')
                o++;
            else
                t++;
            if (s[i + 1][j] == '#')
                o++;
            else
                t++;
            if (s[i + 1][j + 1] == '#')
                o++;
            else
                t++;

            if (o >= 3 || t >= 3)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

    solve();
    return 0;
}