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
    
    // void t(TreeNode* root){
    //     if(root == NULL)return;
    //     t(root->left);
    //     t(root->right);
    //     res.push_back(root->val);
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        // t(root);
        vector<int> res;
        if(root == NULL)return res;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(!s1.empty()){
            root = s1.top();
            s2.push(s1.top());
            s1.pop();
            if(root->left != NULL)
                s1.push(root->left);
            if(root->right != NULL)
                s1.push(root->right);
        }
        while(!s2.empty()){
            res.push_back(s2.top()->val);
            s2.pop();
        }
        return res;
    }
};