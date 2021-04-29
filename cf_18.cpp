#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string sum(string s)
{
    string res = "";
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    while (sum > 0)
    {
        res = (char)('0' + sum % 10) + res;
        sum = sum / 10;
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    int count = 0;

    while (s.size() > 1)
    {
        count++;
        s = sum(s);
    }
    cout << count << endl;
}