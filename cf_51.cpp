#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> st;
    int flag = 0;
    for (ll i = 1; i <= 10000; i++)
    {

        st.insert(i * i * 1ll * i);
    }
    for (ll i = 1; i <= 10000; i++)
    {
        if (st.find(n - i * i * i) != st.end())
        {
            //cout << i << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}