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
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < i; p++)
        {

            if (a[i][p] == '1')
            {
                if (p == n - 1 || i == n - 1 || a[i][p + 1] == '1' || a[i + 1][p] == '1')
                {
                    if (p != n - 1 && i != n - 1)
                    {
                        cout << "ch " << i << " " << p << endl;
                        cout << a[i][p + 1] << " " << a[i + 1][p] << endl;
                    }
                    a[i][p] = '0';
                }
                //
                //
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            if (a[p][i] == '1')
            {
                if (i == n - 1 || p != n - 1 || a[p][i + 1] == '1' || a[p + 1][i] == '1')
                {
                    if (p != n - 1 && i != n - 1)
                    {
                        cout << "ch " << i << " " << p << endl;
                        cout << a[i][p + 1] << " " << a[i + 1][p] << endl;
                    }
                    a[p][i] = '0';
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        if (a[i][i] == '1')
        {
            //cout << i << " " << i << endl;
            if (i == n - 1 || a[i + 1][i] == '1' || a[i][i + 1] == '1')
            {
                //cout << " checking " << a[i + 1][i] << " " << a[i][i + 1] << endl;
                a[i][i] = '0';
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << "YES" << endl;
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