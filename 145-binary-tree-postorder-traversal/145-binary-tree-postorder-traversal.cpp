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
    vector<int> res;
    void t(TreeNode* root){
        if(root == NULL)return;
        t(root->left);
        t(root->right);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        t(root);
        return res;
    }
};