#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define fast ios::sync_with_stdi(0), cin.tie(0), cout.tie(0);

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int INF = 1e8;

void solve()
{
    int n, m, sx, sy, ex, ey;
    cin >> n >> m;
    vector<string> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
            else if (c[i][j] == 'B')
            {
                ex = i;
                ey = j;
            }
        }
    }

    vii d(n, vi(m, INF));
    d[sx][sy] = 0;
    queue<pii> q;
    q.push({sx, sy});

    while (q.size() > 0)
    {
        pii u = q.front();
        q.pop();
        if (u.ff == ex && u.ss == ey)
        {
            cout << "YES" << endl;
            cout << d[u.ff][u.ss] << endl;
            int k = d[u.ff][u.ss];
            int i = u.ff, j = u.ss;
            string ans;
            while (k != 0)
            {
                if (i > 0 && d[i - 1][j] == k - 1)
                {
                    ans.push_back('D');
                    i--;
                }
                else if (i < n - 1 && d[i + 1][j] == k - 1)
                {
                    ans.push_back('U');
                    i++;
                }
                else if (j > 0 && d[i][j - 1] == k - 1)
                {
                    ans.push_back('R');
                    j--;
                }
                else
                {
                    ans.push_back('L');
                    j++;
                }
                k--;
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            return;
        }

        for (int j = 0; j < 4; j++)
        {
            int x = u.ff + dx[j], y = u.ss + dy[j];
            if (x >= 0 && x < n && y >= 0 && y < m && d[x][y] == INF && c[x][y] != '#')
            {
                d[x][y] = d[u.ff][u.ss] + 1;
                q.push({x, y});
            }
        }
    }
    cout << "NO" << endl;
    return;
}

int32_t main()
{
    int t = 1;
    //    cin >> t;
    while (t--)
        solve();
}