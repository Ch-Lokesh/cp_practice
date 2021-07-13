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
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
        return;
    }
    int c = 0;
    int a[26] = {0};
    int b[26] = {0};
    int da = 0, db = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            c++;

        a[s1[i] - 'a']++;
        b[s2[i] - 'a']++;
    }

    int f = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] >= 2)
            f = 1;
    }

    if (c == 0 && f == 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (c == 2)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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