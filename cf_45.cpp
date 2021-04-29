#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> t;
        cin >> t.first;
        cin >> t.second;
        //t.first = -t.first;
        p.push_back(t);
    }
    sort(p.begin(), p.end());
    int large = -1;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].second > large)
            large = p[i].second;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Poor Alex" << endl;
    }
    else
    {
        cout << "Happy Alex" << endl;
    }
    return 0;
}