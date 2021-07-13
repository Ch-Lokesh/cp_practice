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

    int n, k;
    cin >> n >> k;
    int go = 0;
    int not_done = 0;
    int too_slow = 0;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            not_done++;
            go++;
        }
        else if (temp > 1)
        {
            go++;
        }
        if (temp > k)
        {
            too_slow = 1;
            go++;
        }
    }
    if (n - not_done < (n + 1) / 2)
    {
        cout << "Rejected" << endl;
    }
    else if (too_slow == 1)
    {
        cout << "Too Slow" << endl;
    }
    else if (go == 0)
    {
        cout << "Bot" << endl;
    }
    else
    {
        cout << "Accepted" << endl;
    }
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