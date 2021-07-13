#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long



void solve()
{
    
    return;
}

int32_t main()
{
    int t = 1;
    int n, m;
    cin>>n>>m;
    vector<vector<int>> dp(n, vector<int>(m+1, 0));
    int x0;
    cin>>x0;
    if(x0 == 0){
        fill(dp[0].begin(), dp[0].end(), 1);
    }else{
        dp[0][x0] = 1;
    }

    for(int i = 1; i < n; i++){
        int x;
        cin>>x;
        if(x == 0){
            for(int j = 1; j <= m; j++){
                for(int k : {j-1, j, j + 1}){
                    if(k >= 1 && k <= m){
                        (dp[i][j] += dp[i-1][k]) %= MOD;
                    }
                }
            }
        }
        else{
            for(int k : {x-1, x, x+1})
        }
    }
}