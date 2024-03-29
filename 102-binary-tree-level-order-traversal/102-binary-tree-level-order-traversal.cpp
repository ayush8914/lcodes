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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
      
        queue<TreeNode*> q;
        if(root == NULL) return res;
        q.push(root);
        while(!q.empty()){
            vector<int> part;
            int size = q.size();
            for(int i=0;i<size;i++){
                part.push_back(q.front()->val);
                root= q.front();
                q.pop();
                if(root->left != NULL)
                    q.push(root->left);
                if(root->right != NULL)
                    q.push(root->right);
            }
            res.push_back(part);
        }
        return res;
    }
};