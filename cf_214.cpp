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
    set<int> st;
    st.insert(n);
    int prev = n;
    while (1)
    {
        int f = 0;
        int t;
        for (int i = 2; i <= (int)sqrt(prev) + 1; i++)
        {
            if (prev % i == 0)
            {
                //cout << prev << " is div by " << i << endl;
                f = 1;
                t = prev / i;
                if (st.find(t) == st.end())
                {
                    //cout << "inserting " << t << endl;
                    st.insert(t);
                }
                break;
            }
        }
        if (f == 0)
        {
            break;
        }
        prev = t;
    }
    st.insert(1);
    for (auto it = st.rbegin(); it != st.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
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