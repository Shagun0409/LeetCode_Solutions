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
    void fun(TreeNode* root,stack<int>&st,int prev) {

        if (root == nullptr) {
            return;
        }

        if (prev <= root->val) {
            st.push(prev);
        }

        if (root->left != nullptr || root->right != nullptr) {

            prev = max(prev,root->val);
        }

         fun(root->left, st,prev);
         fun(root->right, st,prev);


    }
        int goodNodes(TreeNode * root) {
            stack<int> st;

            fun(root, st,INT_MIN);


    
            return st.size();
        }
    };