#include <bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";

    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

/// level order

void levelOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            cout << node->data << " ";

            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
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
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // cout << "PreOrder Traversal\n";
    // preOrder(root);
    // cout << "\ninOrder Traversal\n";
    // inOrder(root);
    // cout << "\nPostOrder Traversal\n";
    // postOrder(root);
    // cout << "\nLevel order Traversal\n";
    // levelOrder(root);

    // cout << endl;

    return 0;
}