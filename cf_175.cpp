#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define pii pair<int, int>
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

const int nax = 1e5 + 5;
vector<int> g[nax], par(nax, 0);

signed main()
{
    fast;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    queue<int> q;
    q.push(1);
    par[1] = -1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        if (p == n)
            break;
        for (auto &i : g[p])
            if (!par[i])
                par[i] = p, q.push(i);
    }
    if (par[n])
    {
        stack<int> s;
        s.push(n);
        int p = par[n];
        while (p != -1)
        {
            s.push(p);
            p = par[p];
        }
        cout << (int)(s.size()) << "\n";
        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }
    }
    else
        cout << "IMPOSSIBLE";
}