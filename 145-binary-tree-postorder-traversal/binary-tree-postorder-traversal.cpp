/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;

        if (root == nullptr)
            return postorder;

        stack<TreeNode*> s1;
        stack<TreeNode*> s2;

        s1.push(root);
        while (!s1.empty()) {
            root = s1.top();
            s1.pop();
            s2.push(root);

            if (root->left != nullptr) {
                s1.push(root->left);
            }
            if (root->right != nullptr) {
                s1.push(root->right);
            }
        }
        while (!s2.empty()) {
            postorder.push_back(s2.top()->val);
            s2.pop();
        }
        return postorder;
    }
};