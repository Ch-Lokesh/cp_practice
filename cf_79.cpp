#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    string s(200, 'a');
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s[a] = s[a] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}