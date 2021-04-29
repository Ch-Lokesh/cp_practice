#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void neg()
{
    cout << -1 << endl;
}
void No()
{
    cout << "No" << endl;
}
void NO()
{
    cout << "NO" << endl;
}
void YES()
{
    cout << "YES" << endl;
}
void Yes()
{
    cout << "Yes" << endl;
}

void solve()
{

    int n, x;
    cin >> n >> x;
    int e = 0, o = 0;
    fori(i, n)
    {
        int temp;
        cin >> temp;
        if (temp % 2)
            o++;
        else
            e++;
    }
    for (int odds = 1; odds <= min(o, x); odds = odds + 2)
    {
        int evens = x - odds;
        if (e >= evens)
        {
            Yes();
            return;
        }
    }
    No();
    return;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}