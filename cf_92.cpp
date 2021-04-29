#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void no()
{
    cout << -1 << endl;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    fori(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int maxans = 0;
    for (int s = 2; s <= 2 * n; s++)
    {
        int start = 0;
        int end = n - 1;
        int ans = 0;
        while (start < end)
        {
            if (a[start] + a[end] == s)
            {
                ans++;
                start++;
                end--;
            }
            else if (a[start] + a[end] > s)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        maxans = max(maxans, ans);
    }
    cout << maxans << endl;

    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}