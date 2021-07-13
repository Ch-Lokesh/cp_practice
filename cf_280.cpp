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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return;
}

int jump(vector<int> &nums)
{

    int n = nums.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] + i >= j && dp[j] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << endl;
    return dp[n - 1] + 1;
}

int32_t main()
{
    vector<int> a = {2, 3, 0, 1, 4, 3, 5, 3, 3, 2, 3, 2, 1, 1, 1, 3, 6, 7};
    int j = jump(a);
    cout << j << endl;
}