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
    string s, t;
    cin >> s >> t;
    if (s.size() >= t.size())
    {
        int i = 0, j = 0;
        //checking for automation
        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        // cout << j << endl;
        if (j == t.size())
        {
            cout << "automaton" << endl;
            return;
        }
    }
    if (s.size() == t.size())
    {
        string sc = s;
        string tc = t;
        sort(sc.begin(), sc.end());
        sort(tc.begin(), tc.end());
        if (sc == tc)
        {
            cout << "array" << endl;
            return;
        }
    }
    int one[26] = {0}, two[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        one[s[i] - 'a']++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        two[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (two[i] > one[i])
        {
            cout << "need tree" << endl;
            return;
        }
    }
    cout << "both" << endl;
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