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
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelSize = q.size();
            vector<int> currentLevel;
            
            for(int i=0;i<levelSize;i++){
                TreeNode* head = q.front();
                currentLevel.push_back(head->val);
                if(head->left) { q.push(head->left);}
                if(head->right) { q.push(head->right);}
                q.pop();
            }
            res.push_back(currentLevel);
        }
        return res;
        
    }
};
