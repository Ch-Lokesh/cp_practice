#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> luckyNumbers(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> rowMin(n);
    vector<int> colMax(m);

    for (int i = 0; i < n; i++)
    {
        rowMin[i] = matrix[i][0];
        for (int j = 1; j < m; j++)
        {
            rowMin[i] = min(rowMin[i], matrix[i][j]);
        }
    }

    for (int i = 0; i < rowMin.size(); i++)
    {
        cout << rowMin[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < m; j++)
    {
        colMax[j] = matrix[0][j];
        for (int i = 1; i < n; i++)
        {
            colMax[j] = max(colMax[j], matrix[i][j]);
        }
    }

    for (int i = 0; i < colMax.size(); i++)
    {
        cout << colMax[i] << " ";
    }
    cout << endl;

    vector<int> res;
    for (int i = 0; i < min(n, m); i++)
    {
        if (rowMin[i] == colMax[i])
            res.push_back(rowMin[i]);
    }
    return res;
}

int main()
{
    vector<vector<int>> a = {
        {3, 7, 8}, {9, 11, 13}, {15, 16, 17}};
    vector<int> res = luckyNumbers(a);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " " << endl;
    }
    cout << endl;
}