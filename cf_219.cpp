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

typedef struct node
{
    int data;
    struct node *left, *right;

    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
} node;

node *insertNode(node *root, int data)
{
    if (root == NULL)
        return new node(data);

    if (root->data < data)
    {
        root->right = insertNode(root->right, data);
    }
    else
    {
        root->left = insertNode(root->left, data);
    }
    return root;
}

node *minValue(node *root)
{
    node *cur = root;
    while (cur != NULL && cur->left != NULL)
    {
        cur = cur->left;
    }
    return cur;
}

node *deleteNode(node *root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        //node has two children
        node *temp = minValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void preOrder(node *root)
{
    if (root == NULL)
        return;
    preOrder(root->left);
    cout << root->data << " ";
    preOrder(root->right);
}

int32_t main()
{
    node *root = NULL;
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 7);
    root = insertNode(root, 4);
    root = insertNode(root, 6);

    preOrder(root);
    return 0;
}