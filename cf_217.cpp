#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define fori(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

void solve()
{
    int n, k;
    cin >> n >> k;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[i].first = t;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    cout << a[n - k].first << endl;
    for (int i = 0; i < k; i++)
    {
        cout << a[n - 1 - i].second << " ";
    }
    cout << endl;
    return;
}

int32_t main()
{
    //fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}