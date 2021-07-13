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
const int inf = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    int sum = ((n) * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        set<int> a, b;
        for (int i = 1; i <= n; i++)
        {
            a.insert(i);
        }

        int x = sum / 2;
        for (int i = n; i >= 1; i--)
        {
            if (i <= x)
            {
                x = x - i;
                a.erase(i);
                b.insert(i);
            }
        }
        cout << a.size() << endl;
        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << b.size() << endl;
        for (auto x : b)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    fast;
    int t = 1;
    //    cin >> t;
    while (t--)
        solve();
}