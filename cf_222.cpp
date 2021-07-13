#include <bits/stdc++.h>
using namespace std;

bool isWord(string &str, vector<string> &dic)
{
    for (int i = 0; i < dic.size(); i++)
    {
        if (str.compare(dic[i]) == 0)
            return 1;
    }
    return 0;
}
void util(vector<vector<char>> &board, vector<string> &dic, vector < vector<bool> & vis, int i, int j, string &str, vector<string> &res)
{
    vis[i][j] = true;
    str = str + board[i][j];
    if (isWord(str))
        res.push_back(str);
    int M = board.size();
    int N = board[0].size();

    for (int row = i - 1; row <= i + 1 && row < M; row++)
    {
        for (int col = j - 1; col <= j + 1 && col < N; col++)
        {
            if (row >= 0 && col >= 0 && !vis[row][col])
                util(board, dic, vis, row, col, str, res);
        }
    }

    str.erase(str.size() - 1);
    visited[i][j] = false;
}
vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dic)
{
    // Code here
    int n = dic.size();
    int M = board.size();
    int N = board[0].size();
    vector<vector<bool>> vis(M, vector<bool>(N, false));
    string str = "";
    vector<string> res;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            util(board, dic, vis, i, j, str, res);
        }
    }
    return res;
}

int main()
{
    return 0;
}