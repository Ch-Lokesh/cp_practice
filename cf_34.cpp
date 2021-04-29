#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val = n / 4;
        val = n % 4 != 0 ? val + 1 : val;

        for (int i = 0; i < n - val; i++)
        {
            cout << 9;
        }
        for (int i = n - val; i < n; i++)
            cout << 8;
        cout << endl;
    }
}