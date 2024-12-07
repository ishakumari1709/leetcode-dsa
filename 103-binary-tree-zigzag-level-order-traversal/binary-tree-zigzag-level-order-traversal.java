/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void dfs (TreeNode root, int level, List<List<Integer>> answer) {
        
        
        if (root == null) {
            return;
        }
        if (level == answer.size ()) {
            answer.add (new ArrayList<> ());
        }
        if(level%2==0){
            answer.get (level).add (root.val);
        }
        else{
        
        answer.get (level).add (0,root.val);
        }
        
        
        dfs (root.left, level +1, answer);
        dfs (root.right, level + 1, answer);
        
        
        
        
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        
        List<List<Integer>> answer = new ArrayList<> ();
        
        
        dfs (root, 0, answer);
        
        return answer;
    }
}