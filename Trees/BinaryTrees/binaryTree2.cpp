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

/// count of nodes
int countNode(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = countNode(root->left);
    int right = countNode(root->right);

    return left + right + 1;
}
/// sum of nodes
int sumNode(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = sumNode(root->left);
    int right = sumNode(root->right);

    return left + right + root->val;
}
/// height of binary tree
int HeightOfTree(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = HeightOfTree(root->left);
    int right = HeightOfTree(root->right);

    return max(left, right) + 1;
}

// diameter of binary tree
int clacDiammeter(node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int lHeight = HeightOfTree(root->left);
    int rHeight = HeightOfTree(root->right);
    int currDiameter = lHeight + rHeight;

    int lDiameter = clacDiammeter(root->left);
    int rDiameter = clacDiammeter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
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

    cout << "Count of node: " << countNode(root) << endl;
    cout << "Sum of node: " << sumNode(root) << endl;
    cout << "Height Of Binary Tree: " << HeightOfTree(root) << endl;
    cout << "Diameter Of Binary Tree: " << clacDiammeter(root) << endl;
    return 0;
}