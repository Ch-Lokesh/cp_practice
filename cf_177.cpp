#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

const int inf = 1e5 + 5;
vector<int> g[inf], vis(inf, 0);

void dfs(int n)
{
    for (auto &i : g[n])
    {
        if (!vis[i])
        {
            if (vis[n] == 1)
                vis[i] = 2;
            else
                vis[i] = 1;

            dfs(i);
        }
        else
        {
            if (vis[i] == vis[n])
            {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }
}

int32_t main()
{
    fast;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            dfs(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << vis[i] << " ";
    }
}