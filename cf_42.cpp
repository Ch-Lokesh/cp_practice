#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp - 1]++;
    }
    int cars = 0;
    int fours = a[3], threes = a[2], two = a[1], ones = a[0];
    //cout << fours << " " << threes << " " << two << " " << ones << endl;
    cars = cars + fours;
    cars = cars + threes;
    ones = ones - threes;
    if (ones < 0)
        ones = 0;
    cars = cars + two / 2;
    if (two % 2 != 0)
    {
        cars++;
        ones = ones - 2;
        if (ones < 0)
            ones = 0;
        cars += ones / 4;
        if (ones % 4 != 0)
            cars++;
    }
    else
    {
        cars += (ones / 4);
        if (ones % 4 != 0)
            cars++;
    }
    cout << cars << endl;
}