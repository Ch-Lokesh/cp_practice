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

void printAr(int a[], int d)
{
    for (int i = 0; i < d; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve()
{

    int d, sumTime;
    cin >> d >> sumTime;
    int minTime[d], maxTime[d];
    int totMin = 0;
    int totMax = 0;

    for (int i = 0; i < d; i++)
    {
        cin >> minTime[i] >> maxTime[i];
        totMin += minTime[i];
        totMax += maxTime[i];
    }

    if (sumTime < totMin || sumTime > totMax)
    {
        NO();
        return;
    }
    YES();
    int s[d];
    int cur = 0;
    for (int i = 0; i < d; i++)
    {
        s[i] = minTime[i];
        cur += minTime[i];
    }
    if (cur == sumTime)
    {

        printAr(s, d);
        return;
    }
    for (int i = 0; i < d; i++)
    {
        if (s[i] == maxTime[i])
        {
            continue;
        }

        int extra = maxTime[i] - s[i];

        if (extra <= (sumTime - cur))
        {
            s[i] = maxTime[i];
            cur = cur + extra;
        }
        else if (extra > (sumTime - cur))
        {
            s[i] += (sumTime - cur);
            printAr(s, d);
            return;
        }
        if (cur == sumTime)
        {
            printAr(s, d);
            return;
        }
    }

    return;
}

int main()
{

    int t = 1;
    //cin>>t;
    while (t--)
        solve();
    return 0;
}