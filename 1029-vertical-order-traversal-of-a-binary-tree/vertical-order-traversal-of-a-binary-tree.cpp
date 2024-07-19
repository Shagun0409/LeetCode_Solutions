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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;

        queue<pair<TreeNode*, pair<int, int>>> q;


        q.push({root,{0,0}});

               while(!q.empty()){
            // Retrieve the node and its vertical
            // and level information from
            // the front of the queue
            auto p = q.front();
            q.pop();
            TreeNode* temp = p.first;
            
            // Extract the vertical and level information
            // x -> vertical
            int x = p.second.first;  
            // y -> level
            int y = p.second.second; 
            
            // Insert the node value into the
            // corresponding vertical and level
            // in the map
            nodes[x][y].insert(temp->val);
            
            // Process left child
            if(temp->left){
                q.push({
                    temp->left,
                    {
                        // Move left in
                        // terms of vertical
                        x-1, 
                        // Move down in
                        // terms of level
                        y+1  
                    }
                });
            }
            
            // Process right child
            if(temp->right){
                q.push({
                    temp->right, 
                    {
                        // Move right in
                        // terms of vertical
                        x+1, 
                        // Move down in
                        // terms of level
                        y+1  
                    }
                });
            }
        }



        vector<vector<int>> ans;
        for(auto p:nodes){
            vector<int> col;

            for(auto q1:p.second){
                col.insert(col.end(), q1.second.begin(), q1.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};