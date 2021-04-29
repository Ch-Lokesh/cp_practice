#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin >> n;
    unordered_set<int> st;
    int curHight = n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == curHight)
        {
            vector<int> res;
            int check = curHight - 1;
            while (check > 0 && st.find(check) != st.end())
            {
                check--;
            }

            for (int i = curHight; i >= check + 1; i--)
            {
                cout << i << " ";
            }
            cout << endl;
            curHight = check;
        }
        else
        {
            st.insert(temp);
            cout << endl;
        }
    }
    return;
}

int main()
{

    solve();
    return 0;
}