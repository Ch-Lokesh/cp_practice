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
    vector<int> res;
    int a, b, c;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            a = i;
    }

    for (int i = 2; i <= sqrt(n / a) + 1; i++)
    {
        if (i != a && (n / a) % i == 0)
        {
            b = i;
            break;
        }
    }

    if (n / (a * b) != a && n / (a * b) != b && n / (a * b) != 1)
    {
        cout << "YES" << endl;
        cout << a << " " << b << " " << n / (a * b) << endl;
        return;
    }
    else
        cout << "NO" << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}