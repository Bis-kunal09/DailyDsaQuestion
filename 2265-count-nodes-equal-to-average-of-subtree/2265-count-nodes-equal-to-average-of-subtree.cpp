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
    int countNode(TreeNode* root){
        if(root==NULL){
            return 0;
            
        }
        int lc=countNode(root->left);
        int rc=countNode(root->right);
        return 1+lc+rc;
    }
    int f(TreeNode* root,int &temp){
        if(root==NULL){
            return 0;
        }
        int lsum=f(root->left,temp);
        int rsum=f(root->right,temp);
        int avg=root->val+lsum+rsum;
        int count=countNode(root);
        int ans=avg/count;
        if(ans==root->val){
            temp++;
            cout<<"ANS "<<ans<<" count "<<count<<"  Ans "<<ans<<endl;
        }
        return root->val+lsum+rsum;
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root->left&&!root->right){
            return 1;
        }
        int temp=0;
        f(root,temp);
        return temp;
        
        
        
    }
};