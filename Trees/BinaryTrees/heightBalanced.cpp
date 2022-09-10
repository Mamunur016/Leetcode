#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        this->val = val;
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

    cout << root->val << " ";

    preOrder(root->left);
    preOrder(root->right);
}
/// height of binary tree
int HeightOfTree(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int left = HeightOfTree(root->left);
    int right = HeightOfTree(root->right);

    return max(left, right) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = HeightOfTree(root->left);
    int rh = HeightOfTree(root->right);
    // && isBalanced(root->left) && isBalanced(root->right)
    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    return false;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->left->left->left = new Node(8);

    struct Node *root3 = new Node(1);
    root3->left = new Node(2);
    root3->left->left = new Node(3);

    if (isBalanced(root))
    {
        cout << "\nTree is balanced\n";
    }
    else
    {
        cout << "\nTree is not balanced\n";
    }
    if (isBalanced(root2))
    {
        cout << "\nTree is balanced\n";
    }
    else
    {
        cout << "\nTree is not balanced\n";
    }
    if (isBalanced(root3))
    {
        cout << "\nTree is balanced\n";
    }
    else
    {
        cout << "\nTree is not balanced\n";
    }

    return 0;
}