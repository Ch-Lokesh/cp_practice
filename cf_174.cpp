#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int powerv(int a, int b)
{
    int res = 1;
    a = a % MOD;
    while(b > 0){
        if(b & 1)
            res = (res*a) % MOD;

        b = b >> 1;
        a = (a*a) % MOD;
    }
    return res;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int temp = powerv(a, b);
    cout << temp << endl;
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