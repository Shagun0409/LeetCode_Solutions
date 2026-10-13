/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isancestor(TreeNode* root, TreeNode* key, vector<TreeNode*>& res) {
        if (root == nullptr) {
            return false;
        }
        res.push_back(root);
        if (root->val == key->val) {
            return true;
        }

        bool left = isancestor(root->left, key, res);
        bool right = isancestor(root->right, key, res);

        if (left || right)
            return true;

        res.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> res1;
        vector<TreeNode*> res2;

        isancestor(root, p, res1);
        isancestor(root, q, res2);
        int i = 0;
        TreeNode* ans = nullptr;

        while (i < res1.size() && i < res2.size() && res1[i] == res2[i]) {
            ans = res1[i];
            i++;
        }

        return ans;
    }
};
   