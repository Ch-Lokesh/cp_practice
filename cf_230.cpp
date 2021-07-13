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

vector<int> dp(1000001, -1);

bool isPrime(int n)
{
    if (dp[n] != -1)
    {
        if (dp[n] == 1)
            return true;
        else
            return false;
    }
    if (n == 1)
    {
        dp[n] = 0;
        return false;
    }
    if (n == 2)
    {
        dp[n] = 1;
        return true;
    }

    for (int i = 2; i <= sqrt(n) + 1; i++)
    {
        if (n % i == 0)
        {
            dp[n] = 0;
            return false;
        }
    }
    dp[n] = 1;
    return true;
}
void solve()
{

    int t;
    cin >> t;
    if (t <= 3)
    {
        cout << "NO" << endl;
        return;
    }
    int r = sqrt(t);
    if (r * r == t)
    {
        if (isPrime(r))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}