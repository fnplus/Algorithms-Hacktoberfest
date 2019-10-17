#include <iostream>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;

    node->right = NULL;
    return (node);
}

void DFS(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> s;
    s.push(root);
    while (!s.empty())
    {
        Node *temp = s.top();
        cout << temp->data << " ";
        s.pop();
        if (temp->left != NULL)
            s.push(temp->left);
        if (temp->right != NULL)
            s.push(temp->right);
    };
};

int main()
{
    Node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    DFS(root);
    return 0;
};
