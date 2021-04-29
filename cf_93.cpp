#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for(int i = 0; i < int(n); i++)
#define forll(i, n) for(ll i = 0; i < ll(n); i++)
#define MOD 1000000007


void no() {
    cout<< -1 << endl;
}


void solve(){

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int pos = n - 1;
    while(pos > 0 && a[pos-1] >= a[pos]){
        pos--;
    }
    while(pos > 0 && a[pos-1]<= a[pos]){
        pos--;
    }
    cout<<pos<<endl;

    return;
}


int main(){

    int t = 1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}