#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ch = "hello";
    int st = 0;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (st == ch.size())
        {
            flag = 1;
            break;
        }
        if (s[i] == ch[st])
        {
            st++;
        }
        if (st == ch.size())
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}