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
        queue<TreeNode*>queue;

        if (!root){
            return res;
        } 
        else{
            queue.push(root);
        }
        while(queue.size()){
            int length = queue.size();
            vector<int> level;
            for(int i = 0; i < length; i++){
                TreeNode* curr = queue.front();
                queue.pop();
                level.push_back(curr->val);
                if(curr -> left) queue.push(curr -> left);
                if(curr -> right) queue.push(curr -> right);
            }
            if (!level.empty()) {
                res.push_back(level);
            }
        }
        return res;
    
    }
};