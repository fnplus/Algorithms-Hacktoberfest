# Prg for tree traversals

# Class for a node in binary tree
class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.value = key


# INORDER Traversal
def printInorder(root):

	if root:
		
		printInorder(root.left)  # recur on left child
		print(root.value)  # print value
		printInorder(root.right)  # recur on right child


# POSTORDER Traversal
def printPostorder(root):

	if root:

		printPostorder(root.left)  # recur on left child
		printPostorder(root.right)  # print value
		print(root.value)  # recur on right child


# PREORDER Traversal
def printPreorder(root):

	if root:

		print(root.value)  # recur on left child
		printPreorder(root.left)  # print value
		printPreorder(root.right)  # recur on right child


# MAIN
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
print("Preorder traversal of the binary tree is: ")
printPreorder(root)

print("\nInorder traversal of the binary tree is: ")
printInorder(root)

print("\nPostorder traversal of the binary tree is: ")
printPostorder(root)
