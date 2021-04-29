#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;

    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> t;
        cin >> t.first >> t.second;
        p.push_back(t);
    }

    sort(p.begin(), p.end());

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s >= p[i].first)
        {
            s += p[i].second;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}