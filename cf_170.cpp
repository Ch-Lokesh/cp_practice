#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long



void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> v(n), u(m);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=0; i<m; i++)
        cin>>u[i];
    multiset<int,greater<int>> s;
    for(int i=0; i<n; i++)
        s.insert(v[i]);
    
    for(int i=0; i<m; i++){
        auto it = s.lower_bound(u[i]);
        if(it == s.end()){
            cout<<-1 << endl;
        }
        else{
            cout<<*it<<endl;
            s.erase(it);
        }
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