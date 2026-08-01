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
    
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int cnt = 0;
        while(!que.empty()){
            
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* node = que.front();
                    que.pop();
            if(node->left && !node->left->left && !node->left->right) cnt+=node->left->val;
            if(node->left) que.push(node->left);
            if(node->right) que.push(node->right);
            }
            
        }
        return cnt;
    }
};