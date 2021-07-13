#include <bits/stdc++.h>
using namespace std;
int pre[100005], suf[100005];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i - 1] + (s[i - 1] == '1');
        suf[n] = 0;
        for (int i = n - 1; i >= 0; i--)
            suf[i] = suf[i + 1] + (s[i] == '0');
        int ans = n;
        for (int i = 0; i <= n; i++)
            ans = min(ans, pre[i] + suf[i]);
        printf("%d\n", ans);
    }
}