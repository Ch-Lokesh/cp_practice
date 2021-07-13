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
    int n, m;
    cin >> n >> m;
    if(m == 0){
        cout<<"YES"<<endl;
        return;
    }
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int c = 1;
    int mxc = 1;
    if (a[0] == 1 || a[m - 1] == n)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (int i = 1; i < m; i++)
        {
            if (a[i] == a[i - 1] + 1)
            {
                c++;
                mxc = max(mxc, c);
            }
            else
                c = 1;
        }
        if (mxc > 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return;
}

int32_t main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}