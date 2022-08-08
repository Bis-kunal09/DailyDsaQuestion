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
    void f(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &m){
        if(root==NULL){
            return;
        
        }
        if(root->left){
            m[root->left]=root;
        }
        if(root->right){
            m[root->right]=root;
        }
        f(root->left,m);
        f(root->right,m);
        
    }
    void fun(TreeNode* root,int k,unordered_map<TreeNode*,TreeNode*> m,vector<int> &vis,vector<int> &ans){
        if(root==NULL||vis[root->val]==1){
            return ;
        }
        if(k==0){
            ans.push_back(root->val);
        
            return;
        }
        vis[root->val]=1;
        fun(root->left,k-1,m,vis,ans);
        fun(root->right,k-1,m,vis,ans);
        fun(m[root],k-1,m,vis,ans);
        
        
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> m;
        f(root,m);
        vector<int> vis(550,0);
        vector<int> ans;
        
        fun(target,k,m,vis,ans);
        return ans;
        
        
        
    }
};