class Solution {
    public int maxDepth(TreeNode root) {
           int cnt = 0;
           if (root == null) return cnt;
           TreeNode p = root.left;
           TreeNode q = root.right;
           cnt = java.lang.Math.max(maxDepth(p), maxDepth(q));
           return ++cnt;
    }
}