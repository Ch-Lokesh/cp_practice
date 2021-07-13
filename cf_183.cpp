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
const int inf = 1e5 + 5;
const int maxinf = 1e15;

vpii g[inf];
vi dist(inf, maxinf), vis(inf, 0);

void dijistra()
{
    priority_queue<pii, vpii, greater<pii>> Q;
    dist[1] = 0;
    Q.push({0, 1});

    while (Q.size() > 0)
    {
        pii p = Q.top();
        Q.pop();
        if (vis[p.ss])
            continue;

        vis[p.ss] = 1;
        for (auto &i : g[p.ss])
        {
            if (!vis[i.ff])
            {
                if (dist[i.ff] > p.ff + i.ss)
                {
                    dist[i.ff] = p.ff + i.ss;
                    Q.push({dist[i.ff], i.ff});
                }
            }
        }
    }
}

void solve()
{

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