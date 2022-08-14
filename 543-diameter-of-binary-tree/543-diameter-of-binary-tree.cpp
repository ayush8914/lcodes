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
    int maxi =0;
    int diameterOfBinaryTree(TreeNode* root) {
         dobt(root);
        return maxi;
    }
    
    int dobt(TreeNode* root){
        if(root == NULL)return 0;
        int l = dobt(root->left);
        int r = dobt(root->right);
        
        maxi = max(maxi,l+r);
        return max(l,r)+1;
    }
};