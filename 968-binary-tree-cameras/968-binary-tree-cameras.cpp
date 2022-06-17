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
    int f(TreeNode* root,int& ans){
        if(root==NULL){
            return 1;
        }
        int l=f(root->left,ans);
        int r=f(root->right,ans);
        if(l==0||r==0){
            ans++;
            return 2;
        }
        else if(l==2||r==2){
            return 1;
        }
        else{
            return 0;
        }
    }
    int minCameraCover(TreeNode* root) {
        int ans=0;
        if(f(root,ans)==0){
            ans++;
        }
        return ans;
        
    }
};