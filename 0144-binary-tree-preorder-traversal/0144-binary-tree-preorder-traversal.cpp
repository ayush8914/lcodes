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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        vector<int> ans;

        while(!st.empty()){
            TreeNode * t = st.top();
               st.pop();
            if(t !=NULL){
            st.push(t->right);
            st.push(t->left);
            ans.push_back(t->val);
            
         
            }
        }
        return ans;
       

    }
};