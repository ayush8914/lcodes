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
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double> res;
        queue<TreeNode*> q;
        if(root == NULL) return res;
        q.push(root);
      
        while(!q.empty()){
            double sum=0;
            int size = q.size();
            for(int i=0;i<size;i++){
                sum+=(q.front()->val);
                root= q.front();
                q.pop();
                if(root->left != NULL)
                    q.push(root->left);
                if(root->right != NULL)
                    q.push(root->right);
            }
            res.push_back(sum/size);
        }
        return res;
    }
};