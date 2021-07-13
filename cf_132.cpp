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
//void __print(long long x) {cerr << x;}
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
int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    int layer = max(x, y);
    if (layer == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (layer % 2 == 0)
    {
        if (x == y)
        {
            cout << layer * layer - (layer - 1) << endl;
        }
        else if (x < y)
        {
            int start = (layer - 1) * (layer - 1);
            start += x;
            cout << start << endl;
        }
        else
        {
            int end = layer * layer;
            end = end - y + 1;
            cout << end << endl;
        }
    }
    else
    {
        if (x == y)
        {
            cout << layer * layer - (layer - 1) << endl;
        }
        else if (x < y)
        {
            int end = layer * layer;
            end = end - x + 1;
            // cout << "laer " << layer << endl;
            // cout << "end " << end << endl;
            cout << end << endl;
        }
        else
        {
            int start = (layer - 1) * (layer - 1);
            start += y;
            cout << start << endl;
        }
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