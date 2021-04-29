#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    unordered_set<char> vowels;
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');

    if (s.size() != t.size())
    {
        cout << "No" << endl;
    }
    else
    {
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((vowels.find(s[i]) == vowels.end() && vowels.find(t[i]) != vowels.end()) || (vowels.find(s[i]) != vowels.end() && vowels.find(t[i]) == vowels.end()))
            {
                flag = 1;
            }
        }
        if (flag == 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}