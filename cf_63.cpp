#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp] = i + 1;
    }

    int m;
    cin >> m;
    ll pet = 0, vas = 0;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        int pos = mp[temp];
        pet += pos;
        vas += n - pos + 1;
    }
    cout << pet << " " << vas << endl;
}

int main()
{
    solve();
    return 0;
}