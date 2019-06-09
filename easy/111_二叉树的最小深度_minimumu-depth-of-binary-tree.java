class Solution {
    public int minDepth(TreeNode root) {
        // 树为空
        if (root == null) return 0;
        // 左/右子树为空 --- 陷阱,此时它只有有一个孩子，不是叶子节点。
        if (root.left == null) return minDepth(root.right) + 1;
        if (root.right == null) return minDepth(root.left) + 1;
        // 找深度
        int leftDepth = minDepth(root.left);
        int rightDepth = minDepth(root.right);
        return Math.min(leftDepth, rightDepth) + 1;
    }
}