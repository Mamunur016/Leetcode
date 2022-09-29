#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node *ConstructBST(vector<int> preOrder, int *preOrderIdx, int key, int min, int max, int n)
{
    if (*preOrderIdx >= n)
    {
        return NULL;
    }

    Node *root = NULL;

    if (key > min && key < max)
    {
        root = new Node(key);
        *preOrderIdx = *preOrderIdx + 1;

        if (*preOrderIdx < n)
        {

            root->left = ConstructBST(preOrder, preOrderIdx, preOrder[*preOrderIdx], min, key, n);
        }
        if (*preOrderIdx < n)
        {

            root->right = ConstructBST(preOrder, preOrderIdx, preOrder[*preOrderIdx], key, max, n);
        }
    }

    return root;
}

void printInorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main()
{
    vector<int> preOrder = {10, 2, 1, 13, 11};
    int n = preOrder.size();
    int preOrderIdx = 0;

    Node *root = ConstructBST(preOrder, &preOrderIdx, preOrder[0], INT_MIN, INT_MAX, n);

    printInorder(root);
    return 0;
}