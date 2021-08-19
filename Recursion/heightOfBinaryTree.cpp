#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};

int height(node *node)
{
    if (node == NULL)
        return 0;
    int lh = height(node->left);
    int rh = height(node->right);
    return 1 + max(lh, rh);
}

node *newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return Node;
}

using namespace std;

int main()
{

    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(4);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
    cout << height(root);
    return 0;
}