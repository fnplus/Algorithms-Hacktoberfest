import java.util.Stack;
public class bst 
{

	public void depthFirstSearch(Node root) 
	{
		if(root == null) 
		{
			return;
		}
		
		Stack<Node> Stack = new Stack<Node>();
		Stack.push(root);
		
		while(!Stack.isEmpty()) 
		{
			Node node = Stack.peek();
			System.out.print(node.data + " ");
			Stack.pop();
			if(node.right != null) 
			{
				Stack.push(node.right);
			}
			if(node.left != null)
			{
				Stack.push(node.left);
			}
		}
	}
	
	public static void main(String args[]) 
	{
		
		
		
		
		Node root = new Node(4);
	    root.left = new Node(2);
	    root.right = new Node(5);
	    root.left.left = new Node(1);
	    root.left.right = new Node(3);
	    
		
		bst dfs = new bst();
		dfs.depthFirstSearch(root);
	}
}

class Node 
{
	int data;
	Node left;
	Node right;
	
	Node(int value) {
		data = value;
		left = right = null;
	}
}