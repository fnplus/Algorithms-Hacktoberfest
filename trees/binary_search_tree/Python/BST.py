#!/usr/bin/env python
# coding: utf-8

# In[5]:


class Node: 
    def __init__(self,key): 
        self.left = None
        self.right = None
        self.val = key 

# insert a new node with the given key 
def insert(root,node): 
    if root is None: 
        root = node 
    else: 
        if root.val < node.val: 
            if root.right is None: 
                root.right = node 
            else: 
                insert(root.right, node) 
        else: 
            if root.left is None: 
                root.left = node 
            else: 
                insert(root.left, node) 

# inorder tree traversal 
def inorder(root): 
    if root: 
        inorder(root.left) 
        print(root.val) 
        inorder(root.right) 
        

#Driver code  
r = Node(5) 
insert(r,Node(3)) 
insert(r,Node(2)) 
insert(r,Node(4)) 
insert(r,Node(7)) 
insert(r,Node(6)) 
insert(r,Node(8)) 
  
# Print inoder traversal of the BST 
inorder(r) 


# In[ ]:




