#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int,int>>
#define vs vector<string>
#define fori(i,n) for(int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

int a[inf], b[inf];

void solve()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    map<int,int> mp;
    sort(b, b + n);
    for(int i = 0; i < n; i++){
        mp[b[i]] = i;
    }
    for(int i = 0; i < n; i++){
        a[i] = mp[a[i]];
    }
    int L = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != i){
            L = i;
            break;
        }
    }
    int R = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] != i){
            R = i;
            break;
        }
    }
    if(L == -1 || R == -1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else{
        reverse(a + L, a + R + 1);
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(a[i] != i)
                ok = 0;
        }
        if(ok){
            cout<<"yes"<<endl;
            cout<<L+1<<" "<<R+1<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
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