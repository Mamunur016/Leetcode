#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//// level oder traversal

void levelOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *currNode = q.front();
        q.pop();
        if (currNode != NULL)
        {
            cout << currNode->data << " ";

            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

void rightView(node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();

        for (int i = 0; i < n; ++i)
        {

            node *currNode = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << currNode->data << " ";
            }
            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
            }
        }
    }
    {
        /* code */
    }
}
/*
         1
       /  \
      2    3
     / \   / \
     4  5  6  7
  */

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "\nlevel order traversal\n";

    levelOrder(root);

    cout << endl;
    rightView(root);
    return 0;
}