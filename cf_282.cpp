#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void util(vector<int> &nums, int i, vector<int> &temp, vector<vector<int>> &res)
{
    res.push_back(temp);
    if (i == nums.size())
        return;

    temp.push_back(nums[i]);
    util(nums, i + 1, temp, res);
    temp.pop_back();
    util(nums, i + 1, temp, res);
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{

    vector<vector<int>> res;
    vector<int> temp;

    int i = 0;
    util(nums, i, temp, res);
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    vector<int> temp;
    util(nums, 0, temp, res);

    for (int i = 0; i < res.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << " ]";
        cout << endl;
    }
}