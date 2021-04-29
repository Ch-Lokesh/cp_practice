#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p, p + n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s <= p[i].first)
        {
            flag = 1;
            break;
        }
        s += p[i].second;
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}