
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        int data = d;
        left = right = NULL;
    }
};

bool isBalanced(Node *root, int *height)
{

    int lh = 0;
    int rh = 0;

    // If tree is empty then return true
    if (root == NULL)
        return 1;

    if (isBalanced(root->left, &lh) == false)
    {
        return false;
    }
    if (isBalanced(root->right, &rh) == false)
    {
        return false;
    }

    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
        return 1;

    return 0;
}

// Driver code
int main()
{
    // Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->left->left->left = new Node(8);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int height = 0;
    if (isBalanced(root, &height))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
    return 0;
}

// This code is contributed by rathbhupendra
