#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define fori(i, n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endl "\n"
const int inf = 1e5 + 5;

void solve()
{

    return;
}

int32_t main()
{
    vector<int> nums = {-10, -3, -100, -1000, -239, 1};

    int n = nums.size();
    int end = n - 1;
    while (end >= 0 && nums[end] <= 0)
    {
        end--;
    }

    for (int i = 0; i <= end; i++)
    {
        if (nums[i] <= 0)
        {
            swap(nums[i], nums[end]);
            end--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    cout << endl;
    cout << end << endl;

    int last = end;
    for (int i = 0; i <= last; i++)
    {
        if (abs(nums[i]) - 1 <= last)
        {
            nums[abs(nums[i]) - 1] *= -1;
        }
    }
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    for (int i = 0; i <= last; i++)
    {
        if (nums[i] > 0)
        {
            cout << i + 1 << endl;
            return i + 1;
        }
    }
    cout << last + 2 << endl;
    return last + 2c;
}