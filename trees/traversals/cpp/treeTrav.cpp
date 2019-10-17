// Prg for tree traversals in C++
#include <iostream>
using namespace std;

// A class for a node
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};


// INORDER Traversal
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);  // recur on left child
    cout << node->data << " "; // print value
    printInorder(node->right);  // recur on right child
}


// POSTORDER Traversal
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);  // recur on left child
    printPostorder(node->right);  // recur on right child
    cout << node->data << " ";  // print value
}


// PREORDER Traversal
void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";  // print value
    printPreorder(node->left);  // recur on left child
    printPreorder(node->right);  // recur on right child
}

// MAIN
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    return 0;
}
