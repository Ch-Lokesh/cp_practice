#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>
#define vb vector<bool>
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

const int inf = 1e5 + 5;
vi g[inf];
vb vis(inf, 0);
vi par(inf, -1);

void dfs(int node, int p)
{
    par[node] = p;
    vis[node] = 1;

    for (auto x : g[node])
    {
        if (!vis[x])
        {
            dfs(x, node);
        }
        else if (x != p)
        {
            vi cyc;
            int cur = node;
            cyc.push_back(node);
            while (par[cur] != x)
            {
                cur = par[cur];
                cyc.push_back(cur);
            }

            cyc.push_back(x);
            cyc.push_back(node);

            cout << cyc.size() << endl;
            for (auto x : cyc)
                cout << x << " ";
            cout << endl;
            exit(0);
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;

    int a, b;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            dfs(i, -1);
    }

    cout << "IMPOSSIBLE" << endl;
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //    cin >> t;
    while (t--)
        solve();
}