#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007
vector<vector<int>> g;
void neg();
void No();
void NO();
void YES();
void Yes();

void solve()
{

    int n, k, a;
    cin >> n >> k >> a;
    int sp[k];
    for (int i = 0; i < k; i++)
    {
        cin >> sp[i];
    }

    g.resize(n + 1);
    vector<vector<int>> level(n + 1, vector<int>(n + 1));

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //cout << "inp taken" << endl;

    for (int i = 0; i < k; i++)
    {

        bool *visited = new bool[n + 1];
        memset(visited, false, sizeof(visited));
        int f = sp[i];
        queue<int> q;
        q.push(f);
        //int dis = 0;
        level[f][q.front()] = 0;
        visited[f] = 1;
        int ite = 0;
        while (q.size() > 0)
        {
            ite++;
            int top = q.front();
            q.pop();
            for (auto it = g[top].begin(); it != g[top].end(); it++)
            {
                if (visited[*it] == 0)
                {
                    visited[*it] = 1;
                    q.push(*it);
                    level[f][*it] = level[f][top] + 1;
                    //cout << "made " << level[f][*it] << " added " << *it << endl;
                }
            }
        }
    }

    // for (int i = 0; i < k; i++)
    // {
    //     int f = sp[i];
    //     for (auto it = level[f].begin(); it != level[f].end(); it++)
    //     {
    //         cout << *it << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> one;
    vector<int> two;

    for (int i = 1; i <= n; i++)
    {
        int maxa = INT_MIN;
        int maxi;
        for (int j = 0; j < k; j++)
        {
            int f = sp[j];
            // cout << "check " << f << " " << a << " " << i << endl;
            // cout << level[f][a] - level[f][i] << endl;
            if ((level[f][a] - level[f][i]) > maxa)
            {
                // cout << "true" << endl;
                maxa = level[f][a] - level[f][i];
                maxi = f;
                // cout << "cha " << maxa << " " << maxi << endl;
            }
        }
        one.push_back(maxa);
        two.push_back(maxi);
    }
    for (int i = 0; i < n; i++)
    {
        cout << one[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << two[i] << " ";
    }
    cout << endl;

    return;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

void neg()
{
    cout << -1 << endl;
}
void No()
{
    cout << "No" << endl;
}
void NO()
{
    cout << "NO" << endl;
}
void YES()
{
    cout << "YES" << endl;
}
void Yes()
{
    cout << "Yes" << endl;
}