#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int start = 0, end = s.size() - 1;
    int diff = 0;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            diff++;
        }
        start++;
        end--;
    }
    if (diff == 1)
    {
        cout << "YES" << endl;
    }
    else if (diff == 0 && s.size() % 2 == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}