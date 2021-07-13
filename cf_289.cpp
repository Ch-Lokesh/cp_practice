#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
} node;

void insert(node **head, int v)
{
    node *newNode = new node();
    newNode->data = v;
    if (*head == NULL)
        *head = newNode;
    else
    {
        newNode->next = *head;
        *head = newNode;
    }
}

int countNodesIterative(node *head)
{
    node *temp = head;
    int c = 0;
    while (temp)
    {
        temp = temp->next;
        c++;
    }
    return c;
}

int countNodesRecursive(node *head)
{
    if (head == NULL)
        return 0;
    return 1 + countNodesRecursive(head->next);
}

int main()
{

    node *head = NULL;
    int v;
    node *temp = head;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert(&head, v);
    }

    int c = countNodesIterative(head);

    cout << "Number of nodes = " << c << endl;
}
