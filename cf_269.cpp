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

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "no" << endl;
        return;
    }
    vpii p(n - 1);
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            p[i].first = a[i];
            p[i].second = a[i + 1];
        }
        else
        {
            p[i].first = a[i + 1];
            p[i].second = a[i];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            pair<int, int> a = p[i];
            pair<int, int> b = p[j];
            if (a.first != b.first && a.second != b.second)
            {
                if (b.first > a.first && b.first < a.second && b.second > a.second)
                {
                    cout << "yes" << endl;
                    return;
                }
                if (a.first > b.first && a.first < b.second && a.second > b.second)
                {
                    cout << "yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "no" << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}