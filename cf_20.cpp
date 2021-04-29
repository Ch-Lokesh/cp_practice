#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
    }

    int res = 0;
    for (int i = 1; i <= 5; i++)
    {
        int val = sum + i;
        if (val > (n + 1))
        {
            val = val % (n + 1);
        }
        if (val != 1)
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}