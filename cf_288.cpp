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
    int n;
    cin >> n;
    int p = n / 2;
    cout << p << " " << n << endl;
    cout << (p & n) << endl;
    return;
}

int pos(vector<int> &arr, int target)
{
    int start = 0;
    int n = arr.size();
    int end = n - 1;

    int ans = 0;
    while (start <= end)
    {
        int mid = (end - start) / 2 + start;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            ans = mid + 1;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{

    int i = pos(arr, x) - 1;
    cout << "pos is " << i << endl;
    int j = i + 1;

    vector<int> res;
    int d = 0;
    int n = arr.size();

    while (i >= 0 && j < n && d < k)
    {

        cout << "checking " << arr[i] << " " << arr[j] << endl;
        if (abs(arr[i] - x) <= abs(arr[j] - x))
        {

            res.push_back(arr[i]);
            i--;
        }
        else
        {
            res.push_back(arr[j]);
            j++;
        }
        d++;
    }

    while (i >= 0 && d < k)
    {
        res.push_back(arr[i]);
        i--;
        d++;
    }

    while (j < n && d < k)
    {
        res.push_back(arr[j]);
        j++;
        d++;
    }

    sort(res.begin(), res.end());
    return res;
}

int32_t main()
{
    vector<int> a = {1, 2, 3, 4, 5, 8, 10, 15, 18, 19};
    vector<int> res = findClosestElements(a, 4, 9);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}