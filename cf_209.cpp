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

vector<int> p(300001);
vector<int> v(300001);
vector<int> i(300001);
vector<vpii> graph;

void dfs(int src)
{
    v[src] = 1;
    int ind = 0;
    for (auto it : graph[src])
    {
        int node = it.second;
        if (node != p[src])
        {
            i[node] = ind;
        }
        ind++;
        if (!v[node])
        {
            p[node] = src;
            dfs(node);
        }
    }

    sort(graph[src].begin(), graph[src].end(), greater<pair<int, int>>());
    int prior = 1;
    int sum = graph[p[src]][i[src]].first;
    for (auto it : graph[src])
    {
        int node = it.second;
        if (node != p[src])
        {
            sum += prior * it.first;
            prior++;
        }
    }
    graph[p[src]][i[src]].first = sum;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    fill(p.begin(), p.end(), 0);
    fill(v.begin(), v.end(), 0);
    graph.resize(n + 1);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back({1, v});
        graph[v].push_back({1, u});
    }

    graph[0].push_back({1, 1});
    dfs(1);
    cout << (((graph[0][0].first) % MOD) * (x % MOD)) % MOD << endl;
    graph.clear();
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