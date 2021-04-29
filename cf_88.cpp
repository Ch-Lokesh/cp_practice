#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fori(i, n) for (int i = 0; i < int(n); i++)
#define forll(i, n) for (ll i = 0; i < ll(n); i++)
#define MOD 1000000007

void no()
{
    cout << -1 << endl;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> b(n + 2);
    fori(i, n + 2)
    {
        cin >> b[i];
    }

    multiset<int> have(b.begin(), b.end());
    ll sum = accumulate(b.begin(), b.end(), 0LL);
    for (int x : b)
    {
        have.erase(have.find(x));
        sum = sum - x;
        if (sum % 2 == 0 && sum <= 2'000'000'000 && have.find(sum / 2) != have.end())
        {
            have.erase(have.find(sum / 2));
            for (int y : have)
            {
                cout << y << " ";
            }
            cout << endl;
            return;
        }
        sum = sum + x;
        have.insert(x);
    }
    no();

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