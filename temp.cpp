#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> p(5);
    p[0] = {1, 2};
    p[1] = {1, 1};
    p[2] = {1, 5};
    p[3] = {1, 3};
    p[4] = {1, 6};
    sort(p.begin(), p.end());
    for (int i = 0; i < 5; i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
    cout << endl;
    return 0;
}