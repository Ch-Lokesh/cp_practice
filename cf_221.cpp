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
    int start = 1;
    int end = n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << start << " " << end << " ";
            start++;
            end--;
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << start << " " << end << " ";
            start++;
            end--;
        }
        cout << n / 2 + 1 << endl;
    }
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