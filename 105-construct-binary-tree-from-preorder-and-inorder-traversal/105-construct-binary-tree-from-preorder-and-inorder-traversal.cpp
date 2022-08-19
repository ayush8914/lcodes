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
    
        public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> idxs;
        for (int i = 0; i < inorder.size(); i++) {
            idxs[inorder[i]] = i;
        }
        int i = 0;
        return util(preorder, idxs, i, 0, inorder.size() - 1);
    }

private:
    TreeNode* util(
        vector<int>& preorder, unordered_map<int, int>& idxs, int& i, int l, int r) {
        if (i >= preorder.size()) return nullptr;
        if (r < l) return nullptr;

        int val = preorder[i];
        int valIdx = idxs[val];
        if (valIdx < l || valIdx > r) return nullptr;

        TreeNode* curr = new TreeNode(val);
        i++;
        curr->left = util(preorder, idxs, i, l, valIdx - 1);
        curr->right = util(preorder, idxs, i, valIdx + 1, r);
        return curr;
    }
    
};