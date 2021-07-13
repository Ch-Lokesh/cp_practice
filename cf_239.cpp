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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int r = gcd(a, b);
    return a * (b / r);
}

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }
    else if (n == 3)
    {
        cout << 6 << endl;
        return;
    }
    if (n % 2 == 1)
    {
        int res = n * (n - 1) * (n - 2);
        cout << res << endl;
        return;
    }

    //unordered_map<int,int> mp;
    int res = (n - 1) * (n - 2) * (n - 3);
    vi v;
    for (int i = 0; i <= 50 && n - i > 0; i++)
    {
        v.push_back(n - i);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j++)
        {
            for (int k = j; k < v.size(); k++)
            {
                int r = lcm(v[i], lcm(v[j], v[k]));
                res = max(res, r);
            }
        }
    }
    cout << res << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}