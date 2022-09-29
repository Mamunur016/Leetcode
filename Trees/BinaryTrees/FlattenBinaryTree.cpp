// Given a binary tree, flatten it into linked list in - place.Usage of auxiliary data structure is not allowed.
// After flattening, left of each node should point to NULL and right should contain next node in preorder.

/*      1
      /   \
     2     5
    / \     \
   3   4     6

*/
#include <bits/stdc++.h>
using namespace std;

struct Node
{
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

/// inOrder traversal

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void flatten(Node *root)
{

    if (root == NULL || (root->left == NULL && root->right))
    {
        return;
    }

    if (root->left != NULL)
    {
        flatten(root->left);

        Node *tmp = root->right;

        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;

        while (t->right != NULL)
        {
            t = t->right;
        }

        t->right = tmp;
    }

    flatten(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
    flatten(root);
    cout << "The Inorder traversal after flattening binary tree ";
    inOrder(root);
    return 0;
    return 0;
}