#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i].first = a[i];
        p[i].second = i;
    }

    sort(p.begin(), p.end());
    int s = 0;
    vector<int> ids(k);
    for (int i = 0; i < k; i++)
    {
        ids[i] = p[n - 1 - i].second;
        s += p[n - 1 - i].first;
    }
    sort(ids.begin(), ids.end());
    cout << s << endl;
    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
        {
            if (k - 2 >= 0)
                cout << n - ids[k - 2] - 1 << " ";
            else
                cout << n << " ";
        }
        else if (i != 0)
        {
            cout << ids[i] - ids[i - 1] << " ";
        }
        else
        {
            cout << ids[i] + 1 << " ";
        }
    }
    cout << endl;

    return;
}

int main()
{
    //start();
    int t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}