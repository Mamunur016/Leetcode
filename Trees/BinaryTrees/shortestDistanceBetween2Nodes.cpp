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

/// find lca
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->val == n1 || root->val == n2)
    {
        return root;
    }

    node *left = LCA(root->left, n1, n2);
    node *right = LCA(root->right, n1, n2);

    if (left && right)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }

    if (left != NULL)
    {
        return left;
    }

    return right;
}
// Returns level of n if it is present in
// tree, otherwise returns -1
int findLevel(node *root, int n, int level)
{

    if (root == NULL)
    {
        return -1;
    }
    if (root->val == n)
    {
        return level;
    }

    int left = findLevel(root->left, n, level + 1);

    if (left == -1)
    {
        return findLevel(root->right, n, level + 1);
    }

    return left;
}

int findDistance(node *root, int n1, int n2)
{

    node *lca = LCA(root, n1, n2);

    int d1 = findLevel(lca, n1, 0);
    int d2 = findLevel(lca, n2, 0);

    return d1 + d2;
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

    cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
    cout << "\nDist(4, 6) = " << findDistance(root, 4, 6);
    cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
    cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
    cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
    return 0;
}