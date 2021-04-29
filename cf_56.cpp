#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll ab, bc, ca;
    cin >> ab >> bc >> ca;
    ll a = (ll)sqrt((ab * bc) / ca);
    ll b = (ll)sqrt((bc * ca) / ab);
    ll c = (ll)sqrt((ab * ca) / bc);
    cout << 4 * (a + b + c) << endl;
}

int main()
{

    solve();
    return 0;
}