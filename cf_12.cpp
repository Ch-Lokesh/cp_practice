#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    string win;
    int maxv = -1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] > maxv)
        {
            maxv = mp[s];
            win = s;
        }
    }
    cout << win << endl;
}