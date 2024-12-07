/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        return root==nullptr? 0:1+countNodes(root->left)+countNodes(root->right);
        /*queue<TreeNode*>q; 
        int count=0
        if(root==nullptr){
            return 0;
        }
        q.push(root);
        while(!queue.empty()){
            n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                q.push();
                count++;
            }

        }*/
        
    }
};