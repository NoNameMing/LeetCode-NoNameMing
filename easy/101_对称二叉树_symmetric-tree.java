class Solution {
    public boolean isTrue(TreeNode p, TreeNode q)
    {
        if (p == null && q == null) return true;
        if (p == null || q == null) return false;
        else return (p.val == q.val) && isTrue(p.left, q.right) && isTrue(p.right, q.left);
    }
    public boolean isSymmetric(TreeNode root)
    {
        return isTrue(root, root);
    }
}