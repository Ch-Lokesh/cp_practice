#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

void util(string s, int i, set<string> &st)
{
    if (i == s.size())
    {
        return;
    }
    for (int ind = i; ind < s.size(); ind++)
    {
        swap(s[i], s[ind]);
        st.insert(s);
        util(s, i + 1, st);
        swap(s[i], s[ind]);
    }
}

void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> st;
    util(s, 0, st);
    cout << st.size() << endl;
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }

    return;
}

int32_t main()
{
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
}