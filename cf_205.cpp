#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> F, S;
    ll sumF = 0, sumS = 0;
    bool last = 0;
    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        if (x > 0)
        {
            F.push_back(x);
            last = 0;
            sumF += x;
        }
        else
        {
            S.push_back(abs(x));
            last = 1;
            sumS += abs(x);
        }
    }
    if (sumF > sumS)
    {
        cout << "first"
             << "\n";
    }
    else if (sumF < sumS)
    {
        cout << "second"
             << "\n";
    }
    else
    {
        for (int i = 0; i < min(int(F.size()), int(S.size())); ++i)
        {
            if (F[i] > S[i])
            {
                cout << "first"
                     << "\n";
                return 0;
            }
            else if (F[i] < S[i])
            {
                cout << "second"
                     << "\n";
                return 0;
            }
        }
        if (F.size() > S.size())
        {
            cout << "first"
                 << "\n";
        }
        else if (F.size() < S.size())
        {
            cout << "second"
                 << "\n";
        }
        else
        {
            cout << (last ? "second" : "first") << "\n";
        }
    }
}