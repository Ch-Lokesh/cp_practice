#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;

    if (s[0] >= 'a' && s[0] <= 'z')
    {
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                flag = 1;
                break;
            }
        }
    }
    else if (flag == 0 && s[0] >= 'A' && s[0] <= 'Z')
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                flag = 2;
                break;
            }
        }
    }
    if (flag == 1 || flag == 2)
    {
        cout << s << endl;
    }
    else
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << (char)(s[i] - 'A' + 'a');
            }
        }
        else
        {
            cout << s[0] - 'a' + 'A';
            for (int i = 1; i < s.size(); i++)
            {
                cout << (char)(s[i] - 'A' + 'a');
            }
        }
        cout << endl;
    }
}