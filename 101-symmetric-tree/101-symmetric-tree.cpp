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
    bool f(TreeNode* a,TreeNode* b){
        if(a==NULL&&b==NULL){
            return true;
        }
        if(a==NULL&&b!=NULL){
            return false;
        }
        if(b==NULL&&a!=NULL){
            return false;
        }
        return a->val==b->val&&f(a->left,b->right)&&f(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        return f(root->left,root->right);
        
    }
};