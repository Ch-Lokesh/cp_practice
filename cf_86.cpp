#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forin(i, n) for (int i = 0; i < int(n); i++)
#define forlln(i, n) for (ll i = 0; i < ll(n); i++)

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[i] = temp;
        if (i == 0)
        {
            mp[temp]++;
        }
        if (i != 0 && a[i] != a[i - 1])
            mp[temp]++;
    }
    mp[a[0]]--;
    mp[a[n - 1]]--;
    int ans = INT_MAX;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans = min(ans, it->second + 1);
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}