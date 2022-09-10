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

int toSumTree(node *root)
{

    if (root == NULL)
    {
        // cout << "calling ";
        return 0;
    }

    // Store the old value
    int old_val = root->val;
    // cout << old_val << endl;
    // Recursively call for left and
    // right subtrees and store the sum as
    // old value of this node
    root->val = toSumTree(root->left) + toSumTree(root->right);
    // cout << "root-val  " << root->val << endl;
    return root->val + old_val;
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
    toSumTree(root);
    preOrder(root);

    return 0;
}