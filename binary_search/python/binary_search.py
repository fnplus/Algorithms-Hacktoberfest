# add your code here

class node:
    def __init__(self,key):
            self.left = None
            self.right = None
            self.val = key


def insert(root,node):
    if root is None:
        root = node
    elif root.val < node.val:
        if root.right is None:
            root.right = node
        else:
            insert(root.right,node)
    elif root.val > node.val:
        if root.left is None:
            root.right = node
        else:
            insert(root.left,node)
def inorder(root): 
    if root: 
        inorder(root.left) 
        print(root.val) 
        inorder(root.right) 
  


main() 
{ 

    struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    // print inoder traversal of the BST 
    inorder(root); 
   
    return 0; 
} 




