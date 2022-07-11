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
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL)return res;
        
		queue<TreeNode*>que;
        que.push(root);
        
		for(;!que.empty();){
            int sz=que.size();
            int d=0;
			
            while(sz){
                TreeNode*temp=que.front();
                que.pop();
                d=temp->val;
                if(temp->left!=NULL)que.push(temp->left);
                if(temp->right!=NULL)que.push(temp->right);
                sz--;
            }
			
            res.push_back(d);
        }
        return res;
    }
};