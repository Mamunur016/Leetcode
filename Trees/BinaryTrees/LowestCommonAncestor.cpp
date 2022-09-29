#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool getPath(node *root, int key, vector<int> &path)
{

    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);

    if (key == root->data)
    {
        return true;
    }

    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(node *root, int n1, int n2)
{

    vector<int> path1, path2;

    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {

        return -1;
    }

    int pc;

    for (pc = 0; pc < path1.size() && pc < path2.size(); ++pc)
    {

        if (path1[pc] != path2[pc])
        {
            break;
        }
    }

    return path1[pc - 1];
}

node *LCA2(node *root, int n1, int n2)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *left = LCA2(root->left, n1, n2);
    node *right = LCA2(root->right, n1, n2);

    if (left && right)
    {
        return root;
    }
    if (left != NULL)
    {
        return left;
    }
    return right;
}
//// level oder traversal

void levelOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *currNode = q.front();
        q.pop();
        if (currNode != NULL)
        {
            cout << currNode->data << " ";

            if (currNode->left)
            {
                q.push(currNode->left);
            }
            if (currNode->right)
            {
                q.push(currNode->right);
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
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "\nlevel order traversal\n";

    levelOrder(root);

    cout << "\nLongest common ancestor\n";

    node *currNode = LCA2(root, 6, 7);
    cout << currNode->data;

    return 0;
}