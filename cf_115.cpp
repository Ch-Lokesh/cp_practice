#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void neg()
{
    cout << -1 << endl;
}
void No()
{
    cout << "No" << endl;
}
void NO()
{
    cout << "NO" << endl;
}
void YES()
{
    cout << "YES" << endl;
}
void Yes()
{
    cout << "Yes" << endl;
}

void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    int g2 = 0;
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        g2 += a[i] / 2;
    }
    int l2 = n - g2 * 2;

    if (g2 <= l2)
    {
        cout << g2 << endl;
    }
    else
    {
        int diff = g2 - l2;
        cout << "diff is " << diff << endl;
        int ans = INT_MIN;
        for (int i = 0; i <= diff; i = i + 1)
        {

            ans = max(ans, min(g2 - i, l2 + (2 * i)));
            cout << g2 - i << " " << l2 + (2 * i) << endl;
        }
        cout << ans << endl;
    }

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