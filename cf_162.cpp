#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

bool valid(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

void dfs(vector<vector<int>> &dp, int n, int m, int i, int j, vector<vector<int>> &vis)
{
    if (valid(i, j, n, m))
    {
        vis[i][j] = 1;
        for (int d = 0; d < 4; d++)
        {
            int nx = i + dx[d];
            int ny = j + dy[d];
            if (valid(nx, ny, n, m))
            {
                if (dp[i][j] == 1 && !vis[nx][ny])
                {
                    dfs(dp, n, m, nx, ny, vis);
                }
            }
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
                dp[i][j] = 1;
        }
    }
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j] == 1 && vis[i][j] == 0)
            {
                dfs(dp, n, m, i, j, vis);
                res++;
            }
        }
    }

    cout << res << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}