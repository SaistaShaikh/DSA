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
        left = right = NULL;
    }
};

vector<vector<int>> levelorder(struct Node *node)
{

    vector<vector<int>> ans;
    queue<Node *> q;
    q.push(node);

    if (node == NULL)
        return ans;

    while (!q.empty())
    {
        vector<int> level;
        for (int i = 0; i < q.size(); i++)
        {
            Node *nd = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);
    vector<vector<int>> t = levelorder(root);
   

        return 0;
}