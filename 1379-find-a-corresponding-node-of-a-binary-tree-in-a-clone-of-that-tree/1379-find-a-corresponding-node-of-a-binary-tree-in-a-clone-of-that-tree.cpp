/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void f(TreeNode* original, TreeNode* cloned, TreeNode* target,TreeNode* &ans){
        if(original==NULL||cloned==NULL){
            return;
        }
        if(original->val==cloned->val&&original==target){
            ans=cloned;
            return;
        }
        f(original->left,cloned->left,target,ans);
        f(original->right,cloned->right,target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans=NULL;
        f(original,cloned,target,ans);
        return ans;
    }
};