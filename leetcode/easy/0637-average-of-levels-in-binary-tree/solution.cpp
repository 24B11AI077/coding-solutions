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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> bfs;
        bfs.push(root);
        vector<double> res;
        while(!bfs.empty()){
            int size = bfs.size();
            double sum = 0;
            for(int i = 0; i < size; i++){
                TreeNode* node = bfs.front();
                sum += node->val;
                bfs.pop();

                if(node->left){
                    bfs.push(node->left);
                }
                if(node->right) bfs.push(node->right);
            }
            double avg = sum / size;
            res.push_back(avg);
        }
        return res;

    }
};