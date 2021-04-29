#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forin(i, n) for (int i = 0; i < int(n); i++)
#define forlln(i, n) for (ll i = 0; i < ll(n); i++)

void solve()
{
    string s;
    cin >> s;

    unordered_set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('y');

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
        if (st.find(s[i]) != st.end())
        {
            continue;
        }
        else
        {
            cout << "." << s[i];
        }
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}