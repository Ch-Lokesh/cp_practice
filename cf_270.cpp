#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    string res = "";
    while (1)
    {
        res = res + "47";
        sort(res.begin(), res.end());
        do
        {
            if (stoll(res) >= n)
            {
                cout << res << endl;
                return 0;
            }
        } while (next_permutation(res.begin(), res.end()));
    }
    return 0;
}