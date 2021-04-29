#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string res = s;
    reverse(s.begin(), s.end());
    res = res + s;
    cout << res << endl;
}