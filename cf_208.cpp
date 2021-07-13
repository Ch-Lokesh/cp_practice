#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
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
const double pi = 3.1415926536;

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    if (n % 2)
        a.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    int i = a.size() - 1;
    double d = 0;
    while (i > 0)
    {
        d += (double)(a[i] * a[i] - a[i - 1] * a[i - 1]);
        i = i - 2;
    }
    d = pi * d;
    cout << fixed << setprecision(10) << d << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}