#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007

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

void solve()
{

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    int count = 0;

    fori(i, n)
    {
        fori(j, m)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            count += (a[i][j] != a[i - 1][j - 1]);
        }
    }

    int q, x, y, v;
    cin >> q;
    while (q--)
    {
        cin >> x >> y >> v;
        x--;
        y--;

        if (x - 1 >= 0 && y - 1 >= 0)
        {
            count -= (a[x][y] != a[x - 1][y - 1]);
        }
        if (x + 1 < n && y + 1 < m)
        {
            count -= (a[x][y] != a[x + 1][y + 1]);
        }
        a[x][y] = v;
        if (x - 1 >= 0 && y - 1 >= 0)
        {
            count += (a[x][y] != a[x - 1][y - 1]);
        }
        if (x + 1 < n && y + 1 < m)
        {
            count += (a[x][y] != a[x + 1][y + 1]);
        }

        cout << (count == 0 ? "YES" : "NO") << endl;
    }
    return;
}

int32_t main()
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