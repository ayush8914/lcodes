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
    bool ans = true;
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        ans = fun(root->left,root->right);
        return ans;
    }
    
    bool fun(TreeNode* l,TreeNode* r){
        if(l == NULL || r == NULL){
            if(l == r)return true;
            else return false;
        }
        return (l->val == r->val) && fun(l->left,r->right) && fun(l->right,r->left);
    }
};