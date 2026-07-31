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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> que1;
        que1.push(root);
        int value = root->val;
        while(!que1.empty()){
            TreeNode* node = que1.front();
            que1.pop();
            if(node->val != value) return false;
            if(node->left) que1.push(node->left);
            if(node->right) que1.push(node->right);
        }
        return true;
    }
};