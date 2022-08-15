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
    bool flag = true;
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        fun(root);
        return flag;
    }
    int fun(TreeNode* root){
        if(root == NULL)return 0;
        int l = fun(root->left);
        int r = fun(root->right);
        
        if(abs(l-r) > 1){flag = false; return 0;}
        return 1+max(l,r);
    }
};