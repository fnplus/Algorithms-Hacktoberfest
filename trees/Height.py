#!/usr/bin/env python
# coding: utf-8

# In[9]:


class Node: 
  
    # Constructor to create a new node 
    def __init__(self, data): 
        self.data = data 
        self.left = None
        self.right = None

def height(node): 
    if node is None: 
        return 0 ;  
  
    else : 
        left_height = height(node.left) 
        right_height = height(node.right) 

        # Use the larger one 
        if (left_height > right_height): 
            return left_height+1
        else: 
            return right_height+1

# Driver code 
root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.left = Node(4) 
root.left.right = Node(5) 
  
print ("Height of tree is %d" %(height(root))) 


# In[ ]:




