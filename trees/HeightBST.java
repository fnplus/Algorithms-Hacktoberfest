public class BST<Key extends Comparable<Key>, Val> {

    private Node root;

    private class Node {
        private Key key;
        private Val val;
        private Node left;
        private Node right;
        private int size;

        private Node(Key key, Val val, int size) {
            this.key = key;
            this.val = val;
            this.size = size;
        }
    }

    public BST() {
        root = null;
    }

    public void put(Key key, Val val) {
        root = put(root, key, val);
    }

    private Node put(Node x, Key key, Val val) {

        if (x == null) {
            return new Node(key, val, 1);
        }

        int cmp = key.compareTo(x.key);
        if (cmp < 0) {
            x.left = put(x.left, key, val);
        } else if (cmp > 0) {
            x.right = put(x.right, key, val);
        } else {
            x.val = val;
        }
        x.size = 1 + size(x.left) + size(x.right);
        return x;
    }

    public int size() {
        return size(root);
    }

    private int size(Node x) {
        if (x == null) return 0;
        else return x.size;
    }

    public Val get(Key key) {

        return get(root, key);
    }

    private Val get(Node x, Key key) {

        if (x == null) return null;

        int cmp = key.compareTo(x.key);
        if (cmp < 0) {
            return get(x.left, key);
        } else if (cmp > 0) {
            return get(x.right, key);
        } else
            return x.val;
    }

    public int height() {
        return Math.max(size(root.left), size(root.right));
    }

    public void inorderTraversal() {
        inorderTraversal(root);
    }

    private void inorderTraversal(Node x) {
        if (x == null) return;
        inorderTraversal(x.left);
        System.out.println(x.key);
        inorderTraversal(x.right);
    }

    public static void main(String[] args) {

        BST<Integer, String> bst = new BST<>();
        bst.put(3, "c");
        bst.put(4, "d");
        bst.put(2, "b");
        bst.put(1, "a");
        bst.put(5, "e");
        bst.put(6, "f");

        System.out.println(bst.height());

        

    }
}
