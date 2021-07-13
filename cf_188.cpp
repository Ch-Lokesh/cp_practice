#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    unsigned long int l;
    cin >> n >> l;
    unsigned long int data[n];
    // long double d[n + 1];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    sort(data, data + n);

    float max = 0;

    for (i = 0; i < n - 1; i++)
    {
        float d = ((float)data[i + 1] - (float)data[i]) / 2;
        if (d > max)
        {
            max = d;
        }
    }
    if (data[0] > max)
        max = (float)data[0];

    if ((l - data[n - 1]) > max)
        max = ((float)l - (float)data[n - 1]);

    printf("%.9f", max);
    return 0;
}