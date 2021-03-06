/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val,List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
    public List<Integer> postorder(Node root) {
		List<Integer> list = new ArrayList<>();
		postorder(root, list);
        return list;
    }

	private void postorder(Node root, List<Integer> list) {
		if (root == null) return;
		for (Node n : root.children) {
			if (n != null) postorder(n, list);
		}
		list.add(root.val);
	}
}