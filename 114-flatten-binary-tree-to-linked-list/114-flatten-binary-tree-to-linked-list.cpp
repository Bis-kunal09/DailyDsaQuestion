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
//     TreeNode* f(TreeNode* root){
        
//         TreeNode* temp=root->left;
//         while(temp->right!=NULL){
//             temp=temp->right;
//         }
//         cout<<temp->val<<" ";
//         return temp;
//     }
//     void flatten(TreeNode* root) {
        
//         if(root==NULL){
//             return;
//         }
//         if(!root->left&&!root->right){
//             return;
//         }
//         if(!root->right){
//             root->right=root->left;
//             root->left=NULL;
//             f(root->right);
//         }
//         else if(!root->left){
//             f(root->right);
//         }
//         if(root->left&&root->right){
//             cout<<"@";
//             TreeNode* temp=f(root);
        
//             temp->right=root->right;
//             TreeNode* l=root->left;
            
//             root->left=NULL;
//             root->right=l;
//             f(root->right);
           
            
            
            
//         }
        
//     }
    void flatten(TreeNode *root) {
	while (root) {
		if (root->left && root->right) {
			TreeNode* t = root->left;
			while (t->right)
				t = t->right;
			t->right = root->right;
		}

        if(root->left)
		    root->right = root->left;
		root->left = NULL;
		root = root->right;
	}
}
        
        
    
};