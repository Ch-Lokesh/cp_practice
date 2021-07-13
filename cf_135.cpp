#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

#pragma region Debugger
void __print(int x)
{
    cerr << x;
}
void __print(long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void print(T t, V... v)
{
    _print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
#pragma endregion Debugger

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        swap(a, b);
    if (a > 2 * b)
    {
        cout << "NO" << endl;
    }
    else
    {
        a = a % 3;
        b = b % 3;
        if (a < b)
            swap(a, b);
        if ((a == 2 && b == 1) || (a == 0 && b == 0))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}