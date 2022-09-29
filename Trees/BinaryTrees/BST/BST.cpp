#include <bits/stdc++.h>
using namespace std;

/// @brief  structure of nodes
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {

        this->data = data;
        left = NULL;
        right = NULL;
    }
};

///  insert element in BST

Node *insertBst(Node *root, int val)
{

    if (root == NULL)
    {
        return new Node(val);
    }

    if (root->data < val)
    {
        root->right = insertBst(root->right, val);
    }
    else
    {
        root->left = insertBst(root->left, val);
    }

    return root;
}

/// search element in BST
bool search(Node *root, int key)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

/// inorder successor in BST
Node *inOrderSuccessor(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }

    return root;
}

/// delete elemrnt in BST
Node *deleteNode(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > val)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = deleteNode(root->right, val);
    }
    else /// rooot->data== val
    {
        /// case 1

        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        /// case 2

        if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }

        //// case 3
        Node *IS = inOrderSuccessor(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right, IS->data);
    }

    return root;
}

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

/// print element in range

void printInRange(Node *root, int x, int y)
{

    if (root == NULL)
    {
        return;
    }
    if (root->data >= x && root->data <= y)
    {

        printInRange(root->left, x, y);
        cout << root->data << " ";
        printInRange(root->right, x, y);
    }
    else if (root->data >= y)
    {
        printInRange(root->left, x, y);
    }
    else
    {
        printInRange(root->right, x, y);
    }
}
int main()
{
    Node *root = NULL;
    root = insertBst(root, 8);

    insertBst(root, 5);
    insertBst(root, 3);
    insertBst(root, 1);
    insertBst(root, 4);
    insertBst(root, 6);
    insertBst(root, 10);
    insertBst(root, 11);
    insertBst(root, 14);

    printInRange(root, 3, 10);
    cout << endl;
    inOrder(root);
    // deleteNode(root, 5);
    // cout << endl;
    // inOrder(root);
    // if (search(root, 8))
    // {
    //     cout << "\nFound\n";
    // }
    // else
    // {
    //     cout << "\nNot found\n";
    // }
    return 0;
}