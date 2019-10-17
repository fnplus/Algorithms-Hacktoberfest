
class btree_postorder 
{ 
	int key; 
	btree_postorder left, right; 

	public btree_postorder(int item) 
	{ 
		key = item; 
		left = right = null; 
	} 
} 

class BTree 
{ 
	btree_postorder root; 

	BTree() 
	{ 
		root = null; 
	} 

	void printPostorder(btree_postorder node) 
	{ 
		if (node == null) 
			return;
		printPostorder(node.left); 
     	printPostorder(node.right); 
		System.out.print(node.key + " "); 
	} 

	void printPostorder() {	 printPostorder(root); }
	public static void main(String[] args) 
	{ 
		BTree tree = new BTree(); 
		tree.root = new btree_postorder(1); 
		tree.root.left = new btree_postorder(2); 
		tree.root.right = new btree_postorder(3); 
		tree.root.left.left = new btree_postorder(4); 
		tree.root.left.right = new btree_postorder(5); 

		System.out.println("\nPostorder traversal of binary tree is "); 
		tree.printPostorder(); 
	} 
} 
