#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void neg();
void No();
void NO();
void YES();
void Yes();

void solve()
{

    int n;
    cin >> n;
    vector<int> a(n, 0);
    fori(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        a[v]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + max(a[i] - 1, 0);
    }
    cout << ans << endl;
    return;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

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
