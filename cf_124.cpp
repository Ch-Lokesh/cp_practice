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

void start()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{

    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        a.insert(elem);
    }
    int result = 0;

    while (!a.empty())
    {
        int m = *a.rbegin();
        a.erase(m);
        if (m % 2 == 0)
        {
            result++;
            a.insert(m / 2);
        }
    }
    cout << result << endl;
    return;
}

int32_t main()
{
    start();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}