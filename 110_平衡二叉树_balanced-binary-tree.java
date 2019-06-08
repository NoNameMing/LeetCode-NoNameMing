class Solution {
    public boolean isBalanced(TreeNode root) {
        if (root == null) return true;
        return isBalanced(root.left) && isBalanced(root.right) && Math.abs(depth(root.left) - depth(root.right)) <= 1;
    }
    
        private int depth(TreeNode root)
        {
            if (root == null) return 0;
            int leftDepth = depth(root.left);
            int rightDepth = depth(root.right);
            return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
        }
}