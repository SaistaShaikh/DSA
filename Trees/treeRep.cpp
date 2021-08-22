#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{

    struct Node *root = new Node(2);
    root->left = new Node(5);
    root->right = new Node(10);
    root->left->left = new Node(12);

    return 0;
}