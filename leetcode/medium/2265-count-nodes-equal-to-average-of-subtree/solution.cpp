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
int valid = 0;
pair<int,int> counter(TreeNode* root){
    if(root == nullptr){
        return {0,0};
    }
    auto left = counter(root->left);//01
    auto right = counter(root->right);//11
    int res = left.first + right.first + root->val;//9
    int avg = res / (left.second+right.second+1);
    if(avg == root->val) valid++;
    return {res,left.second+right.second+1};
  }
    int averageOfSubtree(TreeNode* root) {
        counter(root);
        return valid;
    }
};