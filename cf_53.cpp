#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int isPalin(string s)
{
    int start = 0;
    int end = s.size() - 1;
    int flag = 0;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            flag = 1;
            break;
        }
        start++;
        end--;
    }
    if (flag == 1)
        return 0;
    return 1;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_set<string> st;

    string res = "";
    string ind = "";

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (st.find(rev) != st.end())
        {
            res = s + res;
            res = res + rev;
            st.erase(rev);
        }
        else
        {
            st.insert(s);
        }
    }
    unordered_set<string>::iterator it;
    for (it = st.begin(); it != st.end(); it++)
    {
        if (isPalin((*it)))
        {
            string t = *it;
            int len = res.size();
            if (len == 0)
            {
                res = t;
            }
            else
            {
                res.insert(len / 2, t);
            }
            break;
        }
    }
    cout << res.size() << endl;
    cout << res << endl;
}

int main()
{

    solve();
    return 0;
}