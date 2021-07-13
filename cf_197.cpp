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
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1], ans[n + 1][m + 1];
    memset(ans, -1, sizeof(ans));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int col = 1; col <= m; col++)
                {
                    if (ans[i][col] == 1)
                    {
                        cout << "NO";
                        return;
                    }
                    ans[i][col] = 0;
                }
                for (int row = 1; row <= n; row++)
                {
                    if (ans[row][j] == 1)
                    {
                        cout << "NO";
                        return;
                    }
                    ans[row][j] = 0;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (ans[i][j] == -1)
                ans[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 1)
            {
                int found = 0;
                for (int col = 1; col <= m; col++)
                {
                    if (ans[i][col] == 1)
                    {
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    for (int row = 1; row <= n; row++)
                    {
                        if (ans[row][j] == 1)
                        {
                            found = 1;
                            break;
                        }
                    }
                }
                if (found == 0)
                {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

int32_t main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}