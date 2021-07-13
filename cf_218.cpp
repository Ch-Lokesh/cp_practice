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

typedef struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
} Node;

void inOrder(Node *root)
{
    stack<Node *> st;
    Node *curr = root;

    while (curr != NULL || st.size() > 0)
    {
        while (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
    }

    curr = st.top();
    st.pop();
    cout << curr->data << " ";
    curr = curr->right;
}

int32_t main()
{

    return 0;
}