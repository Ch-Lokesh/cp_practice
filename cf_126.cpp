#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

long long get(long long n)
{
    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return i;
    return n;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    long long cnt = 0;
    if (n % 2 != 0)
    {
        n -= get(n);
        ++cnt;
    }
    printf("%lld\n", cnt + n / 2);
    return 0;
}