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
    bool isBST(TreeNode* root, TreeNode* l=NULL, TreeNode* r=NULL)
    {
        // Base condition
        if (root == NULL)
            return true;

        // if left node exist then check it has
        // correct data or not i.e. left node's data
        // should be less than root's data
        if (l != NULL and root->val <= l->val)
            return false;

        // if right node exist then check it has
        // correct data or not i.e. right node's data
        // should be greater than root's data
        if (r != NULL and root->val >= r->val)
            return false;

        // check recursively for every node.
        return isBST(root->left, l, root) and
               isBST(root->right, root, r);
    }
    bool isValidBST(TreeNode* root) {
//         if(root==NULL){
//             return true;
//         }
//         if(root->left==NULL&&root->right==NULL){
//             return true;
//         }
//         if(root->left!=NULL&&root->left->val>=root->val){
//             return false;
//         }
//         if(root->right!=NULL&&root->right->val<=root->val){
//             return false;
//         }
        
        
//         return isValidBST(root->left)&&isValidBST(root->right);
            return isBST(root,NULL,NULL);   
    }
};