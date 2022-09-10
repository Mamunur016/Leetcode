#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    struct node *left;
    struct node *right;

    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplacement(node *root)
{

    if (root == NULL)
    {
        return;
    }

    sumReplacement(root->left);
    sumReplacement(root->right);

    if (root->left != NULL)
    {
        root->val += root->left->val;
    }
    if (root->right != NULL)
    {
        root->val += root->right->val;
    }
}

void preOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);

    preOrder(root->right);
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

    preOrder(root);
    cout << "\nafter\n";
    sumReplacement(root);
    preOrder(root);

    return 0;
}