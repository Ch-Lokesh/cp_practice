#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int res;
    int i;
    i = n - b;
    i = max(i, a + 1);
    cout << n - i + 1 << endl;
    return 0;
}