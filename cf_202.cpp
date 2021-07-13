#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
// #define MOD 1000000007
//#define int long long

void solve()
{
    char A[3][3];
    int count_ = 0;
    int countx = 0;
    int counto = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == '_')
            {
                count_++;
            }
            else if (A[i][j] == 'O')
            {
                counto++;
            }
            else
            {
                countx++;
            }
        }
    }
    int matchov = 0;
    int matchxv = 0;
    int matchod = 0;
    int matchxd = 0;
    int matchoh = 0;
    int matchxh = 0;
    for (int i = 0; i < 3; i++)
    {
        if ((A[i][0] == A[i][1]) && (A[i][1] == A[i][2]))
        {
            if (A[i][0] == 'O')
            {
                matchoh++;
            }
            if (A[i][0] == 'X')
            {
                matchxh++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if ((A[0][i] == A[1][i]) && (A[1][i] == A[2][i]))
        {
            if (A[0][i] == 'O')
            {
                matchov++;
            }
            if (A[0][i] == 'X')
            {
                matchxv++;
            }
        }
    }
    if ((A[0][0] == A[1][1]) && (A[1][1] == A[2][2]))
    {
        if (A[1][1] == 'O')
        {
            matchod++;
        }
        if (A[1][1] == 'X')
        {
            matchxd++;
        }
    }
    if ((A[2][0] == A[1][1]) && (A[1][1] == A[0][2]))
    {
        if (A[1][1] == 'O')
        {
            matchod++;
        }
        if (A[1][1] == 'X')
        {
            matchxd++;
        }
    }
    int matchx = matchxv + matchxh + matchxd;
    int matcho = matchov + matchoh + matchod;
    //debug(matchx);
    //debug(matcho);
    if ((matchxv > 1) || (matchxh > 1) || (matchov > 1) || (counto > countx) || (abs(countx - counto) > 1) || (matchoh > 1) || ((matcho >= 1) && (matchx >= 1)))
    {
        cout << 3 << "\n";
        return;
    }
    if (((matcho == 0) && (matchx == 0) && (count_ == 0)))
    {
        cout << 1 << "\n";
        return;
    }
    if ((matcho >= 1) && (matcho <= 2))
    {
        if (counto == countx)
        {
            cout << 1 << "\n";
            return;
        }
        else
        {
            cout << 3 << endl;
            return;
        }
    }
    if (((matchx >= 1) && (matchx <= 2)))
    {
        if (countx == counto + 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 3 << endl;
            return;
        }
    }
    cout << 2 << "\n";
}

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}