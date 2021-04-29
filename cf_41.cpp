#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void upper(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int s = n - row; s >= 0; s--)
        {
            cout << " ";
        }
        for (int r = 0; r < row; r++)
        {
            cout << r << " ";
        }
        cout << row << " ";
        for (int l = row - 1; l >= 0; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}

void middle(int n)
{
}
void lower(int n)
{
}

int main()
{
    int n;
    cin >> n;
    upper(n);

    return 0;
}