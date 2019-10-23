#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node*left = NULL;
    struct Node*right = NULL;
};

long int height(Node*root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;

    long int left = height(root->left);
    long int right = height(root->right);
    return 1 + max(left, right);
}

Node*addNode(Node*root, long int val)
{
    if(root == NULL)
    {
        root = (Node*)malloc(sizeof(Node));
        root->data = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }

    if(val < root->data)
    {
        root->left = addNode(root->left, val);
    }
    else
    {
        root->right = addNode(root->right, val);
    }
    return root;
}

Node* createTree()
{
long int n, tmpData;
Node*root = NULL;
cout<<"Enter the number of nodes"<<endl;
cin>>n;
while(n!=0)
{
cin>>tmpData;
root = addNode(root, tmpData);
n-=1;
}
return root;
}

int main()
{
Node*root = createTree();

cout<<height(root);
}
