#include <cstdio>
#include <iostream>
using namespace std;

int n, a = 0, b = 0;

int main(int argc, char *argv[])
{
#ifdef KANARI
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    for (int i = 1, x; i <= n; ++i)
    {
        cin >> x;
        if (x == 100)
            ++a;
        else
            ++b;
    }
    int sum = 100 * a + 200 * b;
    if (sum % 200 != 0)
        cout << "NO" << endl;
    else
    {
        int half = sum / 2;
        bool ans = false;
        for (int i = 0; i <= b; ++i)
            if (200 * i <= half && half - 200 * i <= a * 100)
                ans = true;
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}