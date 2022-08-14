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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root == NULL)return res;
        q.push(root);
        bool flag =1;
        while(!q.empty()){
           
            int size = q.size();
             vector<int> part(size);
            for(int i=0;i<size;i++){
                root = q.front();
                q.pop();
                int index = (flag)?i : (size-1-i);
                part[index]= root->val;
                if(root->left != NULL)
                    q.push(root->left);
                if(root->right != NULL)
                    q.push(root->right);
                }
             flag = !flag;
            res.push_back(part);
            }
          return res;
        
       
    }
};