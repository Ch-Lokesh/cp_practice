#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define vll vector<ll>
#define ld long double
#define pll pair<ll, ll>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define osetll tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ook order_of_key
#define fbo find_by_order
const int MOD = 1000000007;
long long int inverse(long long int i)
{
    if (i == 1)
        return 1;
    return (MOD - ((MOD / i) * inverse(MOD % i)) % MOD + MOD) % MOD;
}
ll POW(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % MOD;
    ll temp = POW(a, b / 2);
    if (b % 2 == 0)
        return (temp * temp) % MOD;
    else
        return (((temp * temp) % MOD) * a) % MOD;
}
vll AdjList[100005];
ll dfs_num[100005];

void dfs(int u)
{
    dfs_num[u] = 1;
    for (int j = 0; j < (int)AdjList[u].size(); j++)
    {
        ll v = AdjList[u][j];
        if (dfs_num[v] == 0)
            dfs(v);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        AdjList[u].PB(v);
        AdjList[v].PB(u);
    }
    for (int i = 0; i < n; i++)
    {
        dfs_num[i] = 0;
    }
    dfs(0);
    vll ans;
    for (int i = 1; i < n; i++)
    {
        if (dfs_num[i] == 0)
        {
            dfs(i);
            ans.PB(i + 1);
        }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << 1 << " " << ans[i] << "\n";
    }
}